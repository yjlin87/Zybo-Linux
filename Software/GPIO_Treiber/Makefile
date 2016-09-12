# Zu erzeugende Datei
obj-m += GPIO_Treiber.o

# Architektur
ARCH := arm

# Aktuelles Verzeichnis
PWD  := $(shell pwd)

# Der verwendete Cross-Compiler
CROSS_COMPILE := /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/sysroots/x86_64-linux/usr/bin/armv7a-vfp-neon-poky-linux-gnueabi/arm-poky-linux-gnueabi-

# Kernelverzeichnis
KDIR := /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/linux-xlnx

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	make -C $(KDIR) SUBDIRS=$(PWD) clean
