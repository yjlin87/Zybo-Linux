#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>

#define GPIO_Basis		0x43C00000

struct FPGA_Peripherie {
	unsigned long Adresse;
	int Memory;
	void *Map;
	volatile unsigned int *Addr;
};

struct FPGA_Peripherie GPIO = {GPIO_Basis};

int RAM_Map(struct FPGA_Peripherie *Peripherie)
{
	Peripherie->Memory = open("/dev/mem", O_RDWR | O_SYNC);

	if(Peripherie->Memory < 0)
	{
		printf("Oeffnen von /dev/mem fehlgeschlagen!\n");
		return -1;
	}

	Peripherie->Map = mmap(
		NULL,
		4096,
		PROT_READ | PROT_WRITE,
		MAP_SHARED,
		Peripherie->Memory,
		Peripherie->Adresse
	);

	if(Peripherie->Map < 0)
	{
		printf("Mapping fehlgeschlagen!\n");
		return -1;
	}

	Peripherie->Addr = (volatile unsigned int *)Peripherie->Map;

	return 0;
}

int main()
{
	int Status = 0;

	if(RAM_Map(&GPIO) == -1)
	{
		printf("Mappen der GPIO fehlgeschlagen!\n");
		return -1;
	}

	while(1)
	{
		*GPIO.Addr = 0x01;
		sleep(1);
		*GPIO.Addr = 0x00;
		sleep(1);
	}

	return 0;
}

