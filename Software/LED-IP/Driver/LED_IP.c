#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/proc_fs.h>
#include <linux/platform_device.h>
#include <linux/miscdevice.h>
#include <asm/uaccess.h>
#include <asm/io.h>

#define COMPATIBLE	"xlnx,LED-1.0"
#define NAME		"LED"

// Modulinformationen
MODULE_AUTHOR("Daniel Kampert");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Einfacher LED-Treiber");
MODULE_ALIAS(NAME);

struct resource *Device;
struct proc_dir_entry *GPIO_Proc_Eintrag;
volatile u32 *Basisadresse;

static int proc_GPIO_open(struct inode *inode, struct file *file)
{
	printk("Device geoeffnet...\n");
	
	// Used by - Counter erhöhen
	try_module_get(THIS_MODULE);
	
	return 0;
}

static int proc_GPIO_close(struct inode *inode, struct file *file)
{
	printk("Device geschlossen...\n");

	// Used by - Counter verringern
	module_put(THIS_MODULE);

	*Basisadresse = 0;

	return 0;
}

static ssize_t proc_GPIO_write(struct file *file, const char __user *Buffer, size_t count, loff_t *ppos)
{
	u32 Status;

	printk("Anzahl Bytes: %i\n", (unsigned int)count);
	Status = simple_strtoul(Buffer, NULL, 0);
	printk("Daten: %u\n", Status);

	*Basisadresse = Status;

	return count;
}

// Dateioperationen für die proc-Datei
static const struct file_operations proc_GPIO_operations = {
	.owner		= THIS_MODULE,
	.write 		= proc_GPIO_write,
	.open 		= proc_GPIO_open,
	.release 	= proc_GPIO_close
};

static struct miscdevice LED_Dev = {
        MISC_DYNAMIC_MINOR,
        "LED",
        &proc_GPIO_operations
};

// Diese Funktion wird aufgerufen, sobald der Kernel einen
// kompatiblen Eintrag im Devicetree gefunden hat
static int GPIO_probe(struct platform_device *pdev)
{
	// Devicetree öffnen
	Device = platform_get_resource(pdev, IORESOURCE_MEM, 0);

	// Informationen aus dem Devicetree laden
	printk("LED Plattform-Treiber geladen\n");
	printk("Startadresse: %02X\n", (unsigned int)Device->start);
	printk("Endadresse: %02X\n", (unsigned int)Device->end);
	printk("Breite: %02X\n", (unsigned int)((Device->end)-(Device->start)));
	printk("Name:");
	printk(Device->name);
	printk("\n");

	// Speicherbereich maskieren
	Basisadresse = ioremap(Device->start, (Device->end)-(Device->start));
	if(Basisadresse == NULL)
	{
		printk("Fehler beim Oeffnen der Adresse\n");
		return -1;
	}

	// Eintrag unter /proc erstellen
	GPIO_Proc_Eintrag = proc_create(NAME, 0, NULL, &proc_GPIO_operations);

	return 0;
}

static int GPIO_remove(struct platform_device *pdev)
{
	// /proc Datei entfernen
	remove_proc_entry(NAME, NULL);

	// Speicherbereich freigeben
	iounmap(Basisadresse);
	release_mem_region(Device->start, (Device->end)-(Device->start));

	printk("LED Plattform-Treiber entfernt\n");

	return 0;
}

// Beim Laden des Moduls gleicht der Kernel den Devicetree mit
// den Einträgen aus der Matching-Tabelle ab.
static struct of_device_id Amba_of_match[] = {
	{	.name = NAME, 	
		.compatible = COMPATIBLE, 
	},
	{}
};

// Hier wird der Plattformtreiber beschrieben und die Funktionen festgelegt
static struct platform_driver GPIO_platform_driver = {
	.probe = GPIO_probe,
	.remove = GPIO_remove,
	.driver = {
		.name = NAME,
		.owner = THIS_MODULE,
		.of_match_table = Amba_of_match,
	},
};


static int LED_Init(void)
{
        int Status;

	Status = platform_driver_probe(&GPIO_platform_driver, &GPIO_probe);

	if(Status < 0)
	{
		printk(KERN_ALERT "LED Platform Driver probe failed!\n");
		return -1;
	}

        Status = misc_register(&LED_Dev);

        if(Status)
	{
                printk(KERN_ERR "Unable to register LED-Device\n");
		return -1;
	}
	else
	{
		printk("Register LED_Device\n");
	}

        return Status;
}

static void LED_Exit(void)
{
	misc_deregister(&LED_Dev);
	platform_driver_unregister(&GPIO_platform_driver);
	printk("Unregister LED_Device\n");
}

// Hardwareinformationen aus dem Device-Tree auslesen
MODULE_DEVICE_TABLE(of, Amba_of_match);

// Modul initialisieren
module_init(LED_Init);

// Modul abmelden
module_exit(LED_Exit);
