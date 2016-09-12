# Zu erzeugende Datei
obj-m += LED_IP.o

# Architektur
ARCH := arm

# Aktuelles Verzeichnis
PWD  := $(shell pwd)

# Der verwendete Cross-Compiler
CROSS_COMPILE := /home/daniel/Schreibtisch/Yocto/poky/build/tmp/sysroots/x86_64-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-

# Kernelverzeichnis
KDIR := /home/daniel/Schreibtisch/Windows_Share/VM/Zybo_Linux/linux-xlnx

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	make -C $(KDIR) SUBDIRS=$(PWD) clean
