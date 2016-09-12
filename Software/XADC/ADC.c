#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>

#define XADC_Basis		0x43C10000
#define SOFT_RESET_ADDR		0x00
#define STATUS_ADDR		0x01
#define TEMP_ADDR		0x80
#define CHANNEL14_ADDR		0x9E

struct FPGA_Peripherie {
	unsigned long Adresse;
	int Memory;
	void *Map;
	volatile unsigned int *Addr;
};

struct FPGA_Peripherie XADC = {XADC_Basis};

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
	int Temperatur = 0;
	int Channel14 = 0;

	if(RAM_Map(&XADC) == -1)
	{
		printf("Mappen der GPIO fehlgeschlagen!\n");
		return -1;
	}

	while(1)
	{
		*(XADC.Addr + SOFT_RESET_ADDR) |= 0x0A;
		sleep(1);
		*(XADC.Addr + STATUS_ADDR) |= 0x1E;
		Temperatur = *(XADC.Addr + TEMP_ADDR);
		Channel14 = *(XADC.Addr + CHANNEL14_ADDR);
		printf("Temperatur: %i\n", Temperatur);
		printf("Channel 14: %i\n", Channel14);
		sleep(1);
	}

	return 0;
}

