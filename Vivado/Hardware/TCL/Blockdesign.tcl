
################################################################
# This is a generated script based on design: System
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2015.4
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   puts "ERROR: This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source System_script.tcl

# If you do not already have a project created,
# you can create a project using the following command:
#    create_project project_1 myproj -part xc7z010clg400-1

# CHECKING IF PROJECT EXISTS
if { [get_projects -quiet] eq "" } {
   puts "ERROR: Please open or create a project!"
   return 1
}



# CHANGE DESIGN NAME HERE
set design_name System

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "ERROR: Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      puts "INFO: Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   puts "INFO: Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "ERROR: Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "ERROR: Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   puts "INFO: Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   puts "INFO: Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

puts "INFO: Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   puts $errMsg
   return $nRet
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     puts "ERROR: Unable to find parent cell <$parentCell>!"
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     puts "ERROR: Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports
  set DDR [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddrx_rtl:1.0 DDR ]
  set FIXED_IO [ create_bd_intf_port -mode Master -vlnv xilinx.com:display_processing_system7:fixedio_rtl:1.0 FIXED_IO ]
  set GPIO_Buttons [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:gpio_rtl:1.0 GPIO_Buttons ]
  set GPIO_Switch [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:gpio_rtl:1.0 GPIO_Switch ]
  set IIC_0 [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:iic_rtl:1.0 IIC_0 ]
  set Vaux6 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 Vaux6 ]
  set Vaux7 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 Vaux7 ]
  set Vaux14 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 Vaux14 ]
  set Vaux15 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 Vaux15 ]

  # Create ports
  set PWM_Out [ create_bd_port -dir O PWM_Out ]

  # Create instance: AXI_Lite, and set properties
  set AXI_Lite [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 AXI_Lite ]
  set_property -dict [ list \
CONFIG.NUM_MI {7} \
 ] $AXI_Lite

  # Create instance: GPIO_Eingang, and set properties
  set GPIO_Eingang [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 GPIO_Eingang ]
  set_property -dict [ list \
CONFIG.C_ALL_INPUTS {1} \
CONFIG.C_ALL_INPUTS_2 {1} \
CONFIG.C_GPIO2_WIDTH {4} \
CONFIG.C_GPIO_WIDTH {4} \
CONFIG.C_INTERRUPT_PRESENT {1} \
CONFIG.C_IS_DUAL {1} \
 ] $GPIO_Eingang

  # Create instance: processing_system7_0, and set properties
  set processing_system7_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0 ]
  set_property -dict [ list \
CONFIG.PCW_ENET0_ENET0_IO {MIO 16 .. 27} \
CONFIG.PCW_ENET0_PERIPHERAL_CLKSRC {IO PLL} \
CONFIG.PCW_ENET0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_I2C0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_IMPORT_BOARD_PRESET {C:/Users/Daniel/Desktop/Zybo/Zybo.xml} \
CONFIG.PCW_IRQ_F2P_INTR {1} \
CONFIG.PCW_QSPI_GRP_SINGLE_SS_ENABLE {1} \
CONFIG.PCW_SD0_GRP_CD_ENABLE {1} \
CONFIG.PCW_SD0_GRP_WP_ENABLE {1} \
CONFIG.PCW_SD0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_TTC0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_TTC1_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_USB0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_USE_FABRIC_INTERRUPT {1} \
 ] $processing_system7_0

  # Create instance: rst_processing_system7_0_100M, and set properties
  set rst_processing_system7_0_100M [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_processing_system7_0_100M ]

  # Create instance: xadc_wiz_0, and set properties
  set xadc_wiz_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:xadc_wiz:3.2 xadc_wiz_0 ]
  set_property -dict [ list \
CONFIG.ACQUISITION_TIME_VAUXP14_VAUXN14 {true} \
CONFIG.ACQUISITION_TIME_VAUXP15_VAUXN15 {true} \
CONFIG.ACQUISITION_TIME_VAUXP6_VAUXN6 {true} \
CONFIG.ACQUISITION_TIME_VAUXP7_VAUXN7 {true} \
CONFIG.ACQUISITION_TIME_VP_VN {true} \
CONFIG.AVERAGE_ENABLE_TEMPERATURE {true} \
CONFIG.AVERAGE_ENABLE_VAUXP14_VAUXN14 {true} \
CONFIG.AVERAGE_ENABLE_VAUXP15_VAUXN15 {true} \
CONFIG.AVERAGE_ENABLE_VAUXP6_VAUXN6 {true} \
CONFIG.AVERAGE_ENABLE_VAUXP7_VAUXN7 {true} \
CONFIG.AVERAGE_ENABLE_VP_VN {true} \
CONFIG.BIPOLAR_VAUXP14_VAUXN14 {true} \
CONFIG.BIPOLAR_VAUXP15_VAUXN15 {true} \
CONFIG.BIPOLAR_VAUXP6_VAUXN6 {true} \
CONFIG.BIPOLAR_VAUXP7_VAUXN7 {true} \
CONFIG.BIPOLAR_VP_VN {true} \
CONFIG.CHANNEL_ENABLE_CALIBRATION {true} \
CONFIG.CHANNEL_ENABLE_TEMPERATURE {true} \
CONFIG.CHANNEL_ENABLE_VAUXP14_VAUXN14 {true} \
CONFIG.CHANNEL_ENABLE_VAUXP15_VAUXN15 {true} \
CONFIG.CHANNEL_ENABLE_VAUXP6_VAUXN6 {true} \
CONFIG.CHANNEL_ENABLE_VAUXP7_VAUXN7 {true} \
CONFIG.CHANNEL_ENABLE_VP_VN {true} \
CONFIG.CHANNEL_ENABLE_VREFN {true} \
CONFIG.CHANNEL_ENABLE_VREFP {true} \
CONFIG.SEQUENCER_MODE {Continuous} \
CONFIG.XADC_STARUP_SELECTION {channel_sequencer} \
 ] $xadc_wiz_0

  # Create instance: xlconcat_0, and set properties
  set xlconcat_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlconcat:2.1 xlconcat_0 ]

  # Create interface connections
  connect_bd_intf_net -intf_net AXI_Lite_M02_AXI [get_bd_intf_pins AXI_Lite/M02_AXI] [get_bd_intf_pins xadc_wiz_0/s_axi_lite]
  connect_bd_intf_net -intf_net GPIO_Eingang_GPIO [get_bd_intf_ports GPIO_Buttons] [get_bd_intf_pins GPIO_Eingang/GPIO]
  connect_bd_intf_net -intf_net GPIO_Eingang_GPIO2 [get_bd_intf_ports GPIO_Switch] [get_bd_intf_pins GPIO_Eingang/GPIO2]
  connect_bd_intf_net -intf_net Vaux14_1 [get_bd_intf_ports Vaux14] [get_bd_intf_pins xadc_wiz_0/Vaux14]
  connect_bd_intf_net -intf_net Vaux15_1 [get_bd_intf_ports Vaux15] [get_bd_intf_pins xadc_wiz_0/Vaux15]
  connect_bd_intf_net -intf_net Vaux6_1 [get_bd_intf_ports Vaux6] [get_bd_intf_pins xadc_wiz_0/Vaux6]
  connect_bd_intf_net -intf_net Vaux7_1 [get_bd_intf_ports Vaux7] [get_bd_intf_pins xadc_wiz_0/Vaux7]
  connect_bd_intf_net -intf_net processing_system7_0_DDR [get_bd_intf_ports DDR] [get_bd_intf_pins processing_system7_0/DDR]
  connect_bd_intf_net -intf_net processing_system7_0_FIXED_IO [get_bd_intf_ports FIXED_IO] [get_bd_intf_pins processing_system7_0/FIXED_IO]
  connect_bd_intf_net -intf_net processing_system7_0_IIC_0 [get_bd_intf_ports IIC_0] [get_bd_intf_pins processing_system7_0/IIC_0]
  connect_bd_intf_net -intf_net processing_system7_0_M_AXI_GP0 [get_bd_intf_pins AXI_Lite/S00_AXI] [get_bd_intf_pins processing_system7_0/M_AXI_GP0]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M01_AXI [get_bd_intf_pins AXI_Lite/M01_AXI] [get_bd_intf_pins GPIO_Eingang/S_AXI]

  # Create port connections
  connect_bd_net -net GPIO_Eingang_ip2intc_irpt [get_bd_pins GPIO_Eingang/ip2intc_irpt] [get_bd_pins xlconcat_0/In0]
  connect_bd_net -net processing_system7_0_FCLK_CLK0 [get_bd_pins AXI_Lite/ACLK] [get_bd_pins AXI_Lite/M00_ACLK] [get_bd_pins AXI_Lite/M01_ACLK] [get_bd_pins AXI_Lite/M02_ACLK] [get_bd_pins AXI_Lite/M03_ACLK] [get_bd_pins AXI_Lite/M04_ACLK] [get_bd_pins AXI_Lite/M05_ACLK] [get_bd_pins AXI_Lite/M06_ACLK] [get_bd_pins AXI_Lite/S00_ACLK] [get_bd_pins GPIO_Eingang/s_axi_aclk] [get_bd_pins processing_system7_0/FCLK_CLK0] [get_bd_pins processing_system7_0/M_AXI_GP0_ACLK] [get_bd_pins rst_processing_system7_0_100M/slowest_sync_clk] [get_bd_pins xadc_wiz_0/s_axi_aclk]
  connect_bd_net -net processing_system7_0_FCLK_RESET0_N [get_bd_pins processing_system7_0/FCLK_RESET0_N] [get_bd_pins rst_processing_system7_0_100M/aux_reset_in] [get_bd_pins rst_processing_system7_0_100M/ext_reset_in]
  connect_bd_net -net processing_system7_0_TTC1_WAVE0_OUT [get_bd_ports PWM_Out] [get_bd_pins processing_system7_0/TTC1_WAVE0_OUT]
  connect_bd_net -net rst_processing_system7_0_100M_interconnect_aresetn [get_bd_pins AXI_Lite/ARESETN] [get_bd_pins rst_processing_system7_0_100M/interconnect_aresetn] [get_bd_pins xadc_wiz_0/s_axi_aresetn]
  connect_bd_net -net rst_processing_system7_0_100M_peripheral_aresetn [get_bd_pins AXI_Lite/M00_ARESETN] [get_bd_pins AXI_Lite/M01_ARESETN] [get_bd_pins AXI_Lite/M02_ARESETN] [get_bd_pins AXI_Lite/M03_ARESETN] [get_bd_pins AXI_Lite/M04_ARESETN] [get_bd_pins AXI_Lite/M05_ARESETN] [get_bd_pins AXI_Lite/M06_ARESETN] [get_bd_pins AXI_Lite/S00_ARESETN] [get_bd_pins GPIO_Eingang/s_axi_aresetn] [get_bd_pins rst_processing_system7_0_100M/peripheral_aresetn]
  connect_bd_net -net xadc_wiz_0_ip2intc_irpt [get_bd_pins xadc_wiz_0/ip2intc_irpt] [get_bd_pins xlconcat_0/In1]
  connect_bd_net -net xlconcat_0_dout [get_bd_pins processing_system7_0/IRQ_F2P] [get_bd_pins xlconcat_0/dout]

  # Create address segments
  create_bd_addr_seg -range 0x10000 -offset 0x41200000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs GPIO_Eingang/S_AXI/Reg] SEG_axi_gpio_0_Reg
  create_bd_addr_seg -range 0x10000 -offset 0x43C10000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs xadc_wiz_0/s_axi_lite/Reg] SEG_xadc_wiz_0_Reg

  # Perform GUI Layout
  regenerate_bd_layout -layout_string {
   da_ps7_cnt: "1",
   guistr: "# # String gsaved with Nlview 6.5.5  2015-06-26 bk=1.3371 VDI=38 GEI=35 GUI=JA:1.8
#  -string -flagsOSRD
preplace port GPIO_Buttons -pg 1 -y 620 -defaultsOSRD
preplace port DDR -pg 1 -y 80 -defaultsOSRD
preplace port PWM_Out -pg 1 -y 260 -defaultsOSRD
preplace port GPIO_Switch -pg 1 -y 640 -defaultsOSRD
preplace port IIC_0 -pg 1 -y 120 -defaultsOSRD
preplace port FIXED_IO -pg 1 -y 100 -defaultsOSRD
preplace port Vaux6 -pg 1 -y 560 -defaultsOSRD
preplace port Vaux7 -pg 1 -y 580 -defaultsOSRD
preplace port Vaux14 -pg 1 -y 600 -defaultsOSRD
preplace port Vaux15 -pg 1 -y 620 -defaultsOSRD
preplace inst AXI_Lite -pg 1 -lvl 2 -y 660 -defaultsOSRD
preplace inst rst_processing_system7_0_100M -pg 1 -lvl 2 -y 990 -defaultsOSRD
preplace inst xadc_wiz_0 -pg 1 -lvl 1 -y 590 -defaultsOSRD
preplace inst xlconcat_0 -pg 1 -lvl 1 -y 210 -defaultsOSRD
preplace inst GPIO_Eingang -pg 1 -lvl 3 -y 640 -defaultsOSRD
preplace inst processing_system7_0 -pg 1 -lvl 2 -y 200 -defaultsOSRD
preplace netloc Vaux6_1 1 0 1 NJ
preplace netloc processing_system7_0_DDR 1 2 2 NJ 80 NJ
preplace netloc Vaux7_1 1 0 1 NJ
preplace netloc processing_system7_0_M_AXI_GP0 1 1 2 370 400 770
preplace netloc AXI_Lite_M02_AXI 1 0 3 20 410 NJ 410 780
preplace netloc xadc_wiz_0_ip2intc_irpt 1 0 2 20 270 340
preplace netloc processing_system7_0_TTC1_WAVE0_OUT 1 2 2 NJ 260 NJ
preplace netloc processing_system7_0_FCLK_RESET0_N 1 1 2 370 1080 790
preplace netloc processing_system7_0_IIC_0 1 2 2 NJ 120 NJ
preplace netloc GPIO_Eingang_ip2intc_irpt 1 0 4 20 10 NJ 10 NJ 10 1020
preplace netloc GPIO_Eingang_GPIO2 1 3 1 NJ
preplace netloc rst_processing_system7_0_100M_peripheral_aresetn 1 1 2 370 900 800
preplace netloc xlconcat_0_dout 1 1 1 N
preplace netloc Vaux14_1 1 0 1 NJ
preplace netloc GPIO_Eingang_GPIO 1 3 1 NJ
preplace netloc processing_system7_0_FIXED_IO 1 2 2 NJ 100 NJ
preplace netloc rst_processing_system7_0_100M_interconnect_aresetn 1 0 3 30 420 350 420 770
preplace netloc processing_system7_0_FCLK_CLK0 1 0 3 40 760 360 390 800
preplace netloc Vaux15_1 1 0 1 NJ
preplace netloc processing_system7_0_axi_periph_M01_AXI 1 2 1 N
levelinfo -pg 1 0 190 570 910 1040 -top 0 -bot 1090
",
   }
{
   da_axi4_cnt: "9",
}

  # Restore current instance
  current_bd_instance $oldCurInst

  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""


