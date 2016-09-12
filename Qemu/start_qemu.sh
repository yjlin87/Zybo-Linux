#!/bin/sh

./arm-softmmu/qemu-system-arm -M xilinx-zynq-a9 -m 1024 -serial null -serial mon:stdio -kern-dtb ./xilinx_zynq.dtb -smp 2 -nographic -kernel kernel/zImage -initrd filesystem/ramdisk.image.gz -net nic,model=cadence_gem -net user -tftp ~/ -redir tcp:10023::23 -redir tcp:10080::80 -redir tcp:10022::22 -redir tcp:10021::21 -redir tcp:1234::1234
