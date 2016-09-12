#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
	char Raw[] = "/sys/bus/iio/devices/iio:device0/in_temp0_raw";
	char Offset[] = "/sys/bus/iio/devices/iio:device0/in_temp0_offset";
	char Scale[] = "/sys/bus/iio/devices/iio:device0/in_temp0_scale";
	char Buffer[15];

	int iOffset;
	int iRaw;
	int Status;
	int fd;
	float fScale;
	float Temperatur;

	while(1)
	{
		fd = open(Raw, O_RDWR | O_SYNC);
		Status = read(fd, Buffer, 6);
		iRaw = atoi(Buffer);
		close(fd);

		fd = open(Offset, O_RDWR | O_SYNC);
		Status = read(fd, Buffer, 6);
		iOffset = atoi(Buffer);
		close(fd);

		fd = open(Scale, O_RDWR | O_SYNC);
		Status = read(fd, Buffer, 13);
		fScale = atof(Buffer);
		close(fd);

		Temperatur = (float)(iOffset + iRaw) * fScale / 1000.0;

		printf("Temperatur: %f\n", Temperatur);
		sleep(1);	
	}

	return 0;
}
