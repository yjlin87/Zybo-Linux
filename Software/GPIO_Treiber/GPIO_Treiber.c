#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/proc_fs.h>
#include <linux/platform_device.h>
#include <asm/uaccess.h>
#include <asm/io.h>

#define COMPATIBLE	"xlnx,LED-1.0"
#define NAME		"LED"

// Modulinformationen
MODULE_AUTHOR("Daniel Kampert");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Treiber fuer GPIO IP-Core");
MODULE_ALIAS(NAME);

struct resource *Device;
struct proc_dir_entry *GPIO_Proc_Eintrag;
volatile u32 *Basisadresse;

static int proc_GPIO_open(struct inode *inode, struct file *file)
{
	printk("/proc geoeffnet...\n");
	
	// Used by - Counter erhöhen
	try_module_get(THIS_MODULE);
	
	return 0;
}

static int proc_GPIO_close(struct inode *inode, struct file *file)
{
	printk("/proc geschlossen...\n");

	// Used by - Counter verringern
	module_put(THIS_MODULE);

	*Basisadresse = 0;
	return 0;
}

static ssize_t proc_GPIO_write(struct file *file, const char __user *Buffer, size_t count, loff_t *ppos)
{
	u32 Status;

	printk("Count: %i\n", (unsigned int)count);
	Status = simple_strtoul(Buffer, NULL, 0);
	printk("Status: %u\n", Status);

	*Basisadresse = Status;

	return count;
}

// Dateioperationen für die proc-Datei
static const struct file_operations proc_GPIO_operations = {
	.write = proc_GPIO_write,
	.open = proc_GPIO_open,
	.release = proc_GPIO_close
};

// Diese Funktion wird aufgerufen, sobald der Kernel einen
// kompatiblen Eintrag im Devicetree gefunden hat
static int GPIO_probe(struct platform_device *pdev)
{
	// Devicetree öffnen
	Device = platform_get_resource(pdev, IORESOURCE_MEM, 0);

	// Informationen aus dem Devicetree laden
	printk("GPIO Plattform-Treiber geladen\n");
	printk("Startadresse: %02X\n", (unsigned int)Device->start);
	printk("Endadresse: %02X\n", (unsigned int)Device->end);
	printk("Breite: %02X\n", (unsigned int)((Device->end)-(Device->start)));
	printk("Name:");
	printk(Device->name);
	printk("\n");
	printk("Flags: %02X\n", (unsigned int)Device->flags);

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

	printk("GPIO Plattform-Treiber entfernt\n");

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

MODULE_DEVICE_TABLE(of, Amba_of_match);

// Modul beim Kernel anmelden
module_platform_driver(GPIO_platform_driver);
