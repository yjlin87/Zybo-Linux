#!/bin/bash

# ARCH Variable setzen
export ARCH=arm

# Pfad der U-Boot Tools hinzufügen
export PATH=$PATH:/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/u-boot-xlnx/tools

# Verwendeten Cross-Compiler setzen
export CROSS_COMPILE=/home/daniel/Schreibtisch/Yocto/poky/build/tmp/sysroots/x86_64-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-

sudo apt-get update
sudo apt-get install build-essential automake libncurses5 libncurses5-dev libncursesw5 git libgtk2.0-0:i386 libxtst6:i386 gtk2-engines-murrine:i386 lib32stdc++6 libxt6:i386 libdbus-glib-1-2:i386 libasound2:i386 gcc-arm-linux-gnueabi gcc-4.7-arm-linux-gnueabi openjdk-7-jre gawk bison flex zlib1g-dev tofrodos libstdc++6:i386 libncurses5:i386 libncursesw5-dev:i386 gcc lib32z1 lib32ncurses5 lib32bz2-1.0 
sudo apt-get install libssl-dev device-tree-compiler
sudo apt-get install linux-kernel-headers kernel-package
sudo apt-get install gcc-arm-linux-gnueabi make git-core ncurses-dev
sudo apt-get install gcc-arm*
sudo apt-get install linux-source
sudo apt-get install libncurses5-dev libncursesw5-dev
sudo apt-get install u-boot-tools lzop
sudo apt-get install openssh-server vim diffstat texinfo chrpath libsdl1.2-dev
sudo apt-get upgrade
sudo apt-get autoremove
sudo apt-get install codeblocks
sudo apt-get install mingw32

# Yocto aufsetzen
mkdir Yocto
cd Yocto
git clone -b dizzy git://git.yoctoproject.org/poky
cd poky
git clone -b dizzy git://git.yoctoproject.org/meta-xilinx
git clone -b dizzy https://github.com/emcongiu/meta-zybo.git

export LANG="en_US.UTF-8"
export LC_CTYPE="en_US.UTF-8" 
export LC_NUMERIC="en_US.UTF-8"

