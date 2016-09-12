Path=/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux
Version=2016.2

# Bootimage erzeugen
/opt/Xilinx/SDK/$Version/bin/bootgen -w -image $Path/Zybo.bif -o i $Path/BOOT.bin

# Devicetree bauen
$Path/linux-xlnx/scripts/dtc/dtc -I dts -O dtb -o $Path/devicetree.dtb $Path/DeviceTree/system.dts
