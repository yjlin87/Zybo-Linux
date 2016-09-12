#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2016 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/home/Xilinx/SDK/2016.2/bin:/home/Xilinx/Vivado/2016.2/ids_lite/ISE/bin/lin64:/home/Xilinx/Vivado/2016.2/bin
else
  PATH=/home/Xilinx/SDK/2016.2/bin:/home/Xilinx/Vivado/2016.2/ids_lite/ISE/bin/lin64:/home/Xilinx/Vivado/2016.2/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=/home/Xilinx/Vivado/2016.2/ids_lite/ISE/lib/lin64
else
  LD_LIBRARY_PATH=/home/Xilinx/Vivado/2016.2/ids_lite/ISE/lib/lin64:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.runs/impl_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

# pre-commands:
/bin/touch .init_design.begin.rst
EAStep vivado -log System_wrapper.vdi -applog -m64 -messageDb vivado.pb -mode batch -source System_wrapper.tcl -notrace


