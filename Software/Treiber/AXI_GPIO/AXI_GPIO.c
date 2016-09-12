#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/proc_fs.h>
#include <linux/platform_device.h>
#include <linux/interrupt.h>
#include <asm/uaccess.h>
#include <asm/io.h>
#include <linux/of_address.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>
#include <linux/of_irq.h>

#define CHANNEL_1		0x00
#define CHANNEL_2		0x01

#define AXI_GPIO_DATA		0x00
#define AXI_GPIO_TRI		0x01
#define AXI_GPIO2_DATA		0x02
#define AXI_GPIO2_TRI		0x03
#define AXI_GPIO_GIER		0x47
#define AXI_GPIO_ISR		0x48
#define AXI_GPIO_IER		0x4A

/******************************Module informations******************************/

#define Compatible	"xlnx,xps-gpio-1.00.a"
#define Device_Name	"xilinx-gpio"
#define Module_Name	"AXI_GPIO"

MODULE_AUTHOR("Daniel Kampert");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Treiber fuer AXI GPIO IP-Core");
MODULE_ALIAS(Module_Name);

/******************************************************************************/

const int *IntPresent_ptr = NULL;
const int *IsDual_ptr = NULL;
const int *IsInput1_ptr = NULL;
const int *IsInput2_ptr = NULL;
const int *IsOutput1_ptr = NULL;
const int *IsOutput2_ptr = NULL;

struct resource Device;
struct proc_dir_entry *Proc_Eintrag_Parent;
volatile int *Basisadresse;

volatile unsigned int IsInterruptPresent = 0;
volatile unsigned int IsDual = 0;
volatile unsigned int IsInput_1 = 0;
volatile unsigned int IsInput_2 = 0;
volatile unsigned int IsOutput_1 = 0;
volatile unsigned int IsOutput_2 = 0;
volatile unsigned int IRQ = 0;
volatile unsigned int Return = 0;
volatile unsigned int Input_1 = 0;
volatile unsigned int Input_2 = 0;

/******************************Function prototypes*******************************/

static int GPIO_probe(struct platform_device *pdev);
static int GPIO_remove(struct platform_device *pdev);

static int proc_GPIO_open(struct inode* inode, struct file *file);
static int proc_GPIO_close(struct inode* inode, struct file *file);
static ssize_t proc_GPIO_write(struct file* file, const char* Buffer, size_t count, loff_t* ppos);
static ssize_t proc_GPIO_read(struct file *file, char* buffer, size_t count, loff_t* ppos);

static irqreturn_t GPIO_IRQ(int irq, void* dev_id);

/******************************************************************************/

// Beim Laden des Moduls gleicht der Kernel den Devicetree mit
// den Einträgen aus der Matching-Tabelle ab.
static const struct of_device_id Amba_of_match[] = 
{
	{	
		.compatible = Compatible,
	},
	{}
};

// Dateioperationen für die proc-Datei
static const struct file_operations proc_Write_operations = 
{
	.write = proc_GPIO_write,
	.open = proc_GPIO_open,
	.release = proc_GPIO_close
};

static const struct file_operations proc_Read_operations = 
{
	.read = proc_GPIO_read,
	.open = proc_GPIO_open,
	.release = proc_GPIO_close
};

// Hier wird der Plattformtreiber beschrieben und die Funktionen festgelegt
static struct platform_driver GPIO_platform_driver = 
{
	.probe = GPIO_probe,
	.remove = GPIO_remove,
	.driver = 
	{
		.name = "gpio",
		.owner = THIS_MODULE,
		.of_match_table = Amba_of_match,
	},
};

/******************************************************************************/

static int proc_GPIO_open(struct inode *inode, struct file *file)
{
	// Used by - Counter erhöhen
	try_module_get(THIS_MODULE);

	return 0;
}

static int proc_GPIO_close(struct inode *inode, struct file *file)
{
	// Used by - Counter verringern
	module_put(THIS_MODULE);

	return 0;
}

static ssize_t proc_GPIO_read(struct file* file, char* buffer, size_t length, loff_t* ppos)
{
	char Data[2] = { (char)(Input_1 + 0x30),  (char)(Input_2 + 0x30)};
	Return = copy_to_user(buffer, Data, 2);
	Input_1 = 0;
	Input_2 = 0;

	return Return;
}

static ssize_t proc_GPIO_write(struct file* file, const char* Buffer, size_t count, loff_t* ppos)
{
	u32 Status;

	printk("Count: %i\n", (unsigned int)count);
	//Status = simple_strtoul(Buffer, NULL, 0);
	printk("Status: %u\n", Status);

	//*Basisadresse = Status;

	return count;
}

// Diese Funktion wird aufgerufen, sobald der Kernel einen
// kompatiblen Eintrag im Devicetree gefunden hat
static int GPIO_probe(struct platform_device *pdev)
{
	printk(KERN_INFO "AXI-GPIO platform driver loaded...\n");

	IntPresent_ptr = of_get_property(pdev->dev.of_node, "xlnx,interrupt-present", NULL);
	IsDual_ptr = of_get_property(pdev->dev.of_node, "xlnx,is-dual", NULL);
	IsInput1_ptr = of_get_property(pdev->dev.of_node, "xlnx,all-inputs", NULL);
	IsInput2_ptr = of_get_property(pdev->dev.of_node, "xlnx,all-inputs-2", NULL);

	if (!IntPresent_ptr) 
	{
		printk(KERN_INFO "Unable to load Interrupt ressource!\n");
  	}
	else
	{
		IsInterruptPresent = be32_to_cpup(IntPresent_ptr);
	}

	if (!IsDual_ptr)
	{
		printk(KERN_INFO "Unable to load IsDual ressource!\n");
  	}
	else
	{
		IsDual = be32_to_cpup(IsDual_ptr);
	}

	if (!IsInput1_ptr)
	{
		printk(KERN_INFO "Unable to load Input_1 ressource!\n");
  	}
	else
	{
		IsInput_1 = be32_to_cpup(IsInput1_ptr);
	}

	if (!IsInput2_ptr)
	{
		printk(KERN_INFO "Unable to load Input_2 ressource!\n");
  	}
	else
	{
		IsInput_2 = be32_to_cpup(IsInput2_ptr);
	}

	// Devicetree auslesen
	of_address_to_resource(pdev->dev.of_node, 0, &Device);
	printk(KERN_INFO "Starting address: 0x%02X\n", (unsigned int)Device.start);
	printk(KERN_INFO "Final address: 0x%02X\n", (unsigned int)Device.end);
	printk(KERN_INFO "Width: 0x%02X\n", (unsigned int)((Device.end)-(Device.start)));
	printk(KERN_INFO "Name: %s\n", Device.name);
	printk(KERN_INFO "Flags: 0x%02X\n", (unsigned int)Device.flags);
	printk(KERN_INFO "Is Dual: %u\n", IsDual);
	printk(KERN_INFO "Is Channel 1 Input: %u\n", IsInput_1);
	printk(KERN_INFO "Is Channel 2 Input: %u\n", IsInput_2);

	// Speicherbereich maskieren
	Basisadresse = ioremap(Device.start, (Device.end)-(Device.start));
	if(Basisadresse == NULL)
	{
		printk(KERN_INFO "Unable to map memory region!\n");
		return -1;
	}

	if(IsInterruptPresent)
	{
		printk(KERN_INFO "Enable Interrupts...\n");
		IRQ = irq_of_parse_and_map(pdev->dev.of_node, 0);

		if (request_irq(IRQ, GPIO_IRQ, 0, "AXI_GPIO", 0) < 0) 
		{
			printk(KERN_INFO "Cannot register IRQ!\n");
			return -1;
		}

		// Interrupts aktivieren
		*(Basisadresse + AXI_GPIO_IER) |= (1 << CHANNEL_1) | (1 << CHANNEL_2);
		*(Basisadresse + AXI_GPIO_GIER) = 0xFFFFFFFF;
	}

	// Eintrag unter /proc erstellen
	Proc_Eintrag_Parent = proc_mkdir(Module_Name, NULL);
	proc_create("Input", 0644, Proc_Eintrag_Parent, &proc_Read_operations);
	proc_create("Output", 0644, Proc_Eintrag_Parent, &proc_Write_operations);

	return 0;
}

static int GPIO_remove(struct platform_device *pdev)
{
	if(IsInterruptPresent)
	{
		// Interrupts deaktivieren
		*(Basisadresse + AXI_GPIO_IER) &= ~((1 << CHANNEL_1) | (1 << CHANNEL_2));
		*(Basisadresse + AXI_GPIO_GIER) = 0;

		// IRQ abmelden
		free_irq(IRQ, 0);
	}

	// /proc Datei entfernen
	remove_proc_entry(Module_Name, NULL);

	// Speicherbereich freigeben
	iounmap(Basisadresse);
	release_mem_region(Device.start, (Device.end)-(Device.start));

	printk(KERN_INFO "Remove AXI-GPIO platform driver...\n");

	return 0;
}

static irqreturn_t GPIO_IRQ(int irq, void *dev_id)
{
	int IRQ_Channel = *(Basisadresse + AXI_GPIO_ISR); 

	if(IRQ_Channel == 1)
	{
		if(*(Basisadresse + AXI_GPIO_DATA) != 0)
		{
			Input_1 = *(Basisadresse + AXI_GPIO_DATA);
		}
	}
	else
	{
		if(*(Basisadresse + AXI_GPIO2_DATA) != 0)
		{
			Input_2 = *(Basisadresse + AXI_GPIO2_DATA);
		}
	}

	*(Basisadresse + AXI_GPIO_ISR) = IRQ_Channel;

	return IRQ_RETVAL(1);
}

MODULE_DEVICE_TABLE(of, Amba_of_match);

// Modul beim Kernel anmelden
module_platform_driver(GPIO_platform_driver);
