#include <fcntl.h>
#include <stdio.h>

#define BUFFER_LENGTH	1

int main(void)
{
	int Status;
	int File;

	File = open("/dev/LED", O_RDWR);
	
	if(File < 0)
	{
		printf("Datei kann nicht geoeffnet werden!\n");
		return -1;
	}
	
	while(1)
	{
		Status = write(File, "1", BUFFER_LENGTH);
		sleep(1);
		Status = write(File, "0", BUFFER_LENGTH);
		sleep(1);
	}
	
	close(File);
	return 0;
}
