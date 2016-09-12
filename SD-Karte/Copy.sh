#!/bin/bash
# Dieses File soll einige bereits vorkonfigurierte Dateien auf die SD-Karte
# des Zybo schreiben, sodass diese nicht mehr angepasst werden müssen

rootdir=/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/SD-Karte/root
card=/media/daniel/root

cp $rootdir/etc/hostname $card/etc/hostname
cp $rootdir/etc/fstab $card/etc/fstab
cp $rootdir/etc/network/interfaces $card/etc/network/interfaces
