# Zu erzeugende Datei
obj-m += XADC.o

# Aktuelles Verzeichnis
PWD  := $(shell pwd)

# Der verwendete Cross-Compiler
CROSS_COMPILE := /home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/sysroots/x86_64-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-
#CROSS_COMPILE := /media/Zybo_Linux/Yocto/poky/build/tmp/sysroots/x86_64-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-

# Kernelverzeichnis
KDIR := /home/daniel/Schreibtisch/Media/Zybo_Linux/linux-xlnx
#KDIR := /media/Zybo_Linux/linux-xlnx

all:
	make -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	make -C $(KDIR) SUBDIRS=$(PWD) clean
