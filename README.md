# Zybo-Linux

## What is this?
This is a private repository with a full linux project for the Digilent Zybo Board. This repository includes all neccessary files to run linux on the Zybo.

## Files in this repository
  * DeviceTree : Complete device tree for the hardware system
  * device-tree-xlnx : Xilinx device tree Generator. Please  take a look at [GitHub](https://github.com/Xilinx/device-tree-xlnx) for more informations.
  * linux-xlnx : Linux kernel from Xilinx. Please take a look at [GitHub](https://github.com/Xilinx/linux-xlnx) for more informations.
  * u-boot-xlnx : U-Boot from Xilinx. Please take a look at [GitHub](https://github.com/Xilinx/u-boot-xlnx) for more informations.
  * SD-Card : Copy of a working SD-Card
  * Vivado : Vivado project for hardware configuration
  * ConfigSystem : Configurationscript for the system to install all neccessary packets and setup yocto.
  * uEnv.txt : Settings for u-boot
  * u-boot.elf : Precompiled u-boot bootloader
  * uImage : Precompiled linux kernel for Zynq 7010
  * devicetree.dtb : Precompiled device tree
  * BOOT.bin : Precompiled FSBL and bitstream
  * Build.sh : Small script to create device tree blob and BOOT.bin
