
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
  set Button [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:gpio_rtl:1.0 Button ]
  set DDR [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddrx_rtl:1.0 DDR ]
  set FIXED_IO [ create_bd_intf_port -mode Master -vlnv xilinx.com:display_processing_system7:fixedio_rtl:1.0 FIXED_IO ]
  set IIC_0 [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:iic_rtl:1.0 IIC_0 ]
  set LED [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:gpio_rtl:1.0 LED ]
  set Switch [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:gpio_rtl:1.0 Switch ]
  set Vaux14 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 Vaux14 ]

  # Create ports
  set Clock_In [ create_bd_port -dir I -type clk Clock_In ]
  set_property -dict [ list \
CONFIG.FREQ_HZ {125000000} \
 ] $Clock_In
  set HSync [ create_bd_port -dir O HSync ]
  set RGB [ create_bd_port -dir O -from 15 -to 0 RGB ]
  set VSync [ create_bd_port -dir O VSync ]

  # Create instance: AXI_DATA_WIDTH_FFT_CONFIG, and set properties
  set AXI_DATA_WIDTH_FFT_CONFIG [ create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 AXI_DATA_WIDTH_FFT_CONFIG ]
  set_property -dict [ list \
CONFIG.M_TDATA_NUM_BYTES {1} \
 ] $AXI_DATA_WIDTH_FFT_CONFIG

  # Create instance: AXI_DATA_WIDTH_FFT_RX, and set properties
  set AXI_DATA_WIDTH_FFT_RX [ create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 AXI_DATA_WIDTH_FFT_RX ]
  set_property -dict [ list \
CONFIG.M_TDATA_NUM_BYTES {8} \
 ] $AXI_DATA_WIDTH_FFT_RX

  # Create instance: AXI_DATA_WIDTH_FFT_TX, and set properties
  set AXI_DATA_WIDTH_FFT_TX [ create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 AXI_DATA_WIDTH_FFT_TX ]
  set_property -dict [ list \
CONFIG.M_TDATA_NUM_BYTES {4} \
 ] $AXI_DATA_WIDTH_FFT_TX

  # Create instance: AXI_DMA_0, and set properties
  set AXI_DMA_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 AXI_DMA_0 ]
  set_property -dict [ list \
CONFIG.c_include_mm2s_dre {1} \
CONFIG.c_include_s2mm_dre {1} \
CONFIG.c_include_sg {0} \
CONFIG.c_m_axi_mm2s_data_width {32} \
CONFIG.c_m_axis_mm2s_tdata_width {32} \
CONFIG.c_mm2s_burst_size {16} \
CONFIG.c_sg_include_stscntrl_strm {0} \
 ] $AXI_DMA_0

  # Create instance: AXI_FIFO_Data, and set properties
  set AXI_FIFO_Data [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_fifo_mm_s:4.1 AXI_FIFO_Data ]
  set_property -dict [ list \
CONFIG.C_HAS_AXIS_TDEST {false} \
CONFIG.C_HAS_AXIS_TUSER {false} \
CONFIG.C_RX_FIFO_DEPTH {2048} \
CONFIG.C_RX_FIFO_PE_THRESHOLD {2} \
CONFIG.C_RX_FIFO_PF_THRESHOLD {507} \
CONFIG.C_TX_FIFO_DEPTH {2048} \
CONFIG.C_TX_FIFO_PE_THRESHOLD {2} \
CONFIG.C_TX_FIFO_PF_THRESHOLD {507} \
 ] $AXI_FIFO_Data

  # Create instance: AXI_FIFO_FFT_Config, and set properties
  set AXI_FIFO_FFT_Config [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_fifo_mm_s:4.1 AXI_FIFO_FFT_Config ]

  # Create instance: AXI_GPIO_IO, and set properties
  set AXI_GPIO_IO [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 AXI_GPIO_IO ]
  set_property -dict [ list \
CONFIG.C_ALL_INPUTS {1} \
CONFIG.C_ALL_INPUTS_2 {1} \
CONFIG.C_GPIO2_WIDTH {4} \
CONFIG.C_GPIO_WIDTH {4} \
CONFIG.C_INTERRUPT_PRESENT {1} \
CONFIG.C_IS_DUAL {1} \
 ] $AXI_GPIO_IO

  # Create instance: AXI_GPIO_Out, and set properties
  set AXI_GPIO_Out [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 AXI_GPIO_Out ]
  set_property -dict [ list \
CONFIG.C_ALL_OUTPUTS {1} \
CONFIG.C_GPIO_WIDTH {4} \
CONFIG.GPIO_BOARD_INTERFACE {Custom} \
CONFIG.USE_BOARD_FLOW {true} \
 ] $AXI_GPIO_Out

  # Create instance: AXI_HP0, and set properties
  set AXI_HP0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 AXI_HP0 ]
  set_property -dict [ list \
CONFIG.NUM_MI {1} \
CONFIG.NUM_SI {3} \
 ] $AXI_HP0

  # Create instance: AXI_Lite, and set properties
  set AXI_Lite [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 AXI_Lite ]
  set_property -dict [ list \
CONFIG.NUM_MI {7} \
 ] $AXI_Lite

  # Create instance: AXI_VGA_0, and set properties
  set AXI_VGA_0 [ create_bd_cell -type ip -vlnv www.kampis-elektroecke.de:user:AXI_VGA:1.0.2 AXI_VGA_0 ]

  # Create instance: Processing_System_0, and set properties
  set Processing_System_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 Processing_System_0 ]
  set_property -dict [ list \
CONFIG.PCW_ENET0_ENET0_IO {MIO 16 .. 27} \
CONFIG.PCW_ENET0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_FTM_CTI_IN0 {CPU0 DBG_REQ} \
CONFIG.PCW_FTM_CTI_OUT0 {CPU0 DBG_ACK} \
CONFIG.PCW_I2C0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_IMPORT_BOARD_PRESET {C:/Users/Daniel/Desktop/Zybo/Zybo.xml} \
CONFIG.PCW_IRQ_F2P_INTR {1} \
CONFIG.PCW_QSPI_GRP_SINGLE_SS_ENABLE {1} \
CONFIG.PCW_SD0_GRP_CD_ENABLE {1} \
CONFIG.PCW_SD0_GRP_WP_ENABLE {1} \
CONFIG.PCW_SD0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_SPI0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_TTC0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_TTC1_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_USB0_PERIPHERAL_ENABLE {1} \
CONFIG.PCW_USE_CROSS_TRIGGER {1} \
CONFIG.PCW_USE_FABRIC_INTERRUPT {1} \
CONFIG.PCW_USE_S_AXI_HP0 {1} \
 ] $Processing_System_0

  # Create instance: System_Clock, and set properties
  set System_Clock [ create_bd_cell -type ip -vlnv xilinx.com:ip:clk_wiz:5.2 System_Clock ]
  set_property -dict [ list \
CONFIG.CLKIN1_JITTER_PS {80.0} \
CONFIG.CLKOUT1_JITTER {281.423} \
CONFIG.CLKOUT1_PHASE_ERROR {365.405} \
CONFIG.CLKOUT1_REQUESTED_OUT_FREQ {25.175} \
CONFIG.MMCM_CLKFBOUT_MULT_F {61.500} \
CONFIG.MMCM_CLKIN1_PERIOD {8.0} \
CONFIG.MMCM_CLKOUT0_DIVIDE_F {43.625} \
CONFIG.MMCM_DIVCLK_DIVIDE {7} \
CONFIG.PRIM_IN_FREQ {125.000} \
CONFIG.RESET_PORT {resetn} \
CONFIG.RESET_TYPE {ACTIVE_LOW} \
 ] $System_Clock

  # Create instance: XADC_Wizard, and set properties
  set XADC_Wizard [ create_bd_cell -type ip -vlnv xilinx.com:ip:xadc_wiz:3.2 XADC_Wizard ]
  set_property -dict [ list \
CONFIG.ACQUISITION_TIME_VAUXP14_VAUXN14 {true} \
CONFIG.ACQUISITION_TIME_VAUXP15_VAUXN15 {false} \
CONFIG.ACQUISITION_TIME_VAUXP6_VAUXN6 {false} \
CONFIG.ACQUISITION_TIME_VAUXP7_VAUXN7 {false} \
CONFIG.ACQUISITION_TIME_VP_VN {false} \
CONFIG.ADC_OFFSET_AND_GAIN_CALIBRATION {true} \
CONFIG.ADC_OFFSET_CALIBRATION {true} \
CONFIG.AVERAGE_ENABLE_TEMPERATURE {true} \
CONFIG.AVERAGE_ENABLE_VAUXP14_VAUXN14 {true} \
CONFIG.AVERAGE_ENABLE_VAUXP15_VAUXN15 {false} \
CONFIG.AVERAGE_ENABLE_VAUXP6_VAUXN6 {false} \
CONFIG.AVERAGE_ENABLE_VAUXP7_VAUXN7 {false} \
CONFIG.AVERAGE_ENABLE_VBRAM {true} \
CONFIG.AVERAGE_ENABLE_VCCAUX {true} \
CONFIG.AVERAGE_ENABLE_VCCDDRO {true} \
CONFIG.AVERAGE_ENABLE_VCCINT {true} \
CONFIG.AVERAGE_ENABLE_VCCPAUX {true} \
CONFIG.AVERAGE_ENABLE_VCCPINT {true} \
CONFIG.AVERAGE_ENABLE_VP_VN {false} \
CONFIG.BIPOLAR_VAUXP14_VAUXN14 {true} \
CONFIG.BIPOLAR_VAUXP15_VAUXN15 {false} \
CONFIG.BIPOLAR_VAUXP6_VAUXN6 {false} \
CONFIG.BIPOLAR_VAUXP7_VAUXN7 {false} \
CONFIG.BIPOLAR_VP_VN {false} \
CONFIG.CHANNEL_AVERAGING {None} \
CONFIG.CHANNEL_ENABLE_CALIBRATION {true} \
CONFIG.CHANNEL_ENABLE_TEMPERATURE {true} \
CONFIG.CHANNEL_ENABLE_VAUXP14_VAUXN14 {true} \
CONFIG.CHANNEL_ENABLE_VAUXP15_VAUXN15 {false} \
CONFIG.CHANNEL_ENABLE_VAUXP6_VAUXN6 {false} \
CONFIG.CHANNEL_ENABLE_VAUXP7_VAUXN7 {false} \
CONFIG.CHANNEL_ENABLE_VBRAM {true} \
CONFIG.CHANNEL_ENABLE_VCCAUX {true} \
CONFIG.CHANNEL_ENABLE_VCCDDRO {true} \
CONFIG.CHANNEL_ENABLE_VCCINT {true} \
CONFIG.CHANNEL_ENABLE_VCCPAUX {true} \
CONFIG.CHANNEL_ENABLE_VCCPINT {true} \
CONFIG.CHANNEL_ENABLE_VP_VN {false} \
CONFIG.CHANNEL_ENABLE_VREFN {true} \
CONFIG.CHANNEL_ENABLE_VREFP {true} \
CONFIG.ENABLE_AXI4STREAM {false} \
CONFIG.SEQUENCER_MODE {Continuous} \
CONFIG.TIMING_MODE {Continuous} \
CONFIG.XADC_STARUP_SELECTION {channel_sequencer} \
 ] $XADC_Wizard

  # Create instance: XFFT, and set properties
  set XFFT [ create_bd_cell -type ip -vlnv xilinx.com:ip:xfft:9.0 XFFT ]
  set_property -dict [ list \
CONFIG.aresetn {true} \
CONFIG.data_format {floating_point} \
CONFIG.implementation_options {pipelined_streaming_io} \
CONFIG.number_of_stages_using_block_ram_for_data_and_phase_factors {0} \
CONFIG.output_ordering {natural_order} \
CONFIG.phase_factor_width {24} \
CONFIG.run_time_configurable_transform_length {false} \
CONFIG.scaling_options {scaled} \
CONFIG.transform_length {64} \
 ] $XFFT

  # Create instance: ila_0, and set properties
  set ila_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:ila:6.0 ila_0 ]
  set_property -dict [ list \
CONFIG.C_ENABLE_ILA_AXI_MON {true} \
CONFIG.C_MONITOR_TYPE {AXI} \
CONFIG.C_NUM_OF_PROBES {19} \
CONFIG.C_PROBE0_WIDTH {1} \
CONFIG.C_TRIGIN_EN {true} \
CONFIG.C_TRIGOUT_EN {true} \
 ] $ila_0

  # Create instance: rst_processing_system7_0_100M, and set properties
  set rst_processing_system7_0_100M [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_processing_system7_0_100M ]

  # Create instance: xlconcat_0, and set properties
  set xlconcat_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlconcat:2.1 xlconcat_0 ]
  set_property -dict [ list \
CONFIG.NUM_PORTS {6} \
 ] $xlconcat_0

  # Create interface connections
  connect_bd_intf_net -intf_net AXI_DATA_WIDTH_FFT_RX_M_AXIS [get_bd_intf_pins AXI_DATA_WIDTH_FFT_RX/M_AXIS] [get_bd_intf_pins XFFT/S_AXIS_DATA]
  connect_bd_intf_net -intf_net AXI_DATA_WIDTH_FFT_TX_M_AXIS [get_bd_intf_pins AXI_DATA_WIDTH_FFT_TX/M_AXIS] [get_bd_intf_pins AXI_FIFO_Data/AXI_STR_RXD]
  connect_bd_intf_net -intf_net AXI_DMA_0_M_AXIS_MM2S [get_bd_intf_pins AXI_DMA_0/M_AXIS_MM2S] [get_bd_intf_pins AXI_DMA_0/S_AXIS_S2MM]
  connect_bd_intf_net -intf_net AXI_DMA_0_M_AXI_MM2S [get_bd_intf_pins AXI_DMA_0/M_AXI_MM2S] [get_bd_intf_pins AXI_HP0/S00_AXI]
  connect_bd_intf_net -intf_net AXI_DMA_0_M_AXI_S2MM [get_bd_intf_pins AXI_DMA_0/M_AXI_S2MM] [get_bd_intf_pins AXI_HP0/S01_AXI]
  connect_bd_intf_net -intf_net AXI_FIFO_Data_AXI_STR_TXD [get_bd_intf_pins AXI_DATA_WIDTH_FFT_RX/S_AXIS] [get_bd_intf_pins AXI_FIFO_Data/AXI_STR_TXD]
  connect_bd_intf_net -intf_net AXI_FIFO_FFT_Config_AXI_STR_TXD [get_bd_intf_pins AXI_DATA_WIDTH_FFT_CONFIG/S_AXIS] [get_bd_intf_pins AXI_FIFO_FFT_Config/AXI_STR_TXD]
  connect_bd_intf_net -intf_net AXI_Lite_M01_AXI [get_bd_intf_pins AXI_GPIO_IO/S_AXI] [get_bd_intf_pins AXI_Lite/M01_AXI]
  connect_bd_intf_net -intf_net AXI_Lite_M02_AXI [get_bd_intf_pins AXI_DMA_0/S_AXI_LITE] [get_bd_intf_pins AXI_Lite/M02_AXI]
  connect_bd_intf_net -intf_net AXI_Lite_M04_AXI [get_bd_intf_pins AXI_FIFO_FFT_Config/S_AXI] [get_bd_intf_pins AXI_Lite/M04_AXI]
  connect_bd_intf_net -intf_net AXI_Lite_M05_AXI [get_bd_intf_pins AXI_GPIO_Out/S_AXI] [get_bd_intf_pins AXI_Lite/M05_AXI]
  connect_bd_intf_net -intf_net AXI_Lite_M06_AXI [get_bd_intf_pins AXI_Lite/M06_AXI] [get_bd_intf_pins AXI_VGA_0/S00_AXI]
  connect_bd_intf_net -intf_net Processing_System_0_DDR [get_bd_intf_ports DDR] [get_bd_intf_pins Processing_System_0/DDR]
  connect_bd_intf_net -intf_net Processing_System_0_IIC_0 [get_bd_intf_ports IIC_0] [get_bd_intf_pins Processing_System_0/IIC_0]
  connect_bd_intf_net -intf_net Processing_System_0_M_AXI_GP0 [get_bd_intf_pins AXI_Lite/S00_AXI] [get_bd_intf_pins Processing_System_0/M_AXI_GP0]
  connect_bd_intf_net -intf_net Processing_System_0_TRIGGER_OUT_0 [get_bd_intf_pins Processing_System_0/TRIGGER_OUT_0] [get_bd_intf_pins ila_0/TRIG_IN]
  connect_bd_intf_net -intf_net Vaux14_1 [get_bd_intf_ports Vaux14] [get_bd_intf_pins XADC_Wizard/Vaux14]
  connect_bd_intf_net -intf_net XFFT_M_AXIS_DATA [get_bd_intf_pins AXI_DATA_WIDTH_FFT_TX/S_AXIS] [get_bd_intf_pins XFFT/M_AXIS_DATA]
  connect_bd_intf_net -intf_net axi_gpio_0_GPIO [get_bd_intf_ports Button] [get_bd_intf_pins AXI_GPIO_IO/GPIO]
  connect_bd_intf_net -intf_net axi_gpio_0_GPIO1 [get_bd_intf_ports LED] [get_bd_intf_pins AXI_GPIO_Out/GPIO]
  connect_bd_intf_net -intf_net axi_gpio_0_GPIO2 [get_bd_intf_ports Switch] [get_bd_intf_pins AXI_GPIO_IO/GPIO2]
  connect_bd_intf_net -intf_net axi_mem_intercon_M00_AXI [get_bd_intf_pins AXI_HP0/M00_AXI] [get_bd_intf_pins Processing_System_0/S_AXI_HP0]
  connect_bd_intf_net -intf_net axis_dwidth_converter_0_M_AXIS1 [get_bd_intf_pins AXI_DATA_WIDTH_FFT_CONFIG/M_AXIS] [get_bd_intf_pins XFFT/S_AXIS_CONFIG]
  connect_bd_intf_net -intf_net ila_0_TRIG_OUT [get_bd_intf_pins Processing_System_0/TRIGGER_IN_0] [get_bd_intf_pins ila_0/TRIG_OUT]
  connect_bd_intf_net -intf_net processing_system7_0_FIXED_IO [get_bd_intf_ports FIXED_IO] [get_bd_intf_pins Processing_System_0/FIXED_IO]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M00_AXI [get_bd_intf_pins AXI_FIFO_Data/S_AXI] [get_bd_intf_pins AXI_Lite/M00_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M03_AXI [get_bd_intf_pins AXI_Lite/M03_AXI] [get_bd_intf_pins XADC_Wizard/s_axi_lite]
connect_bd_intf_net -intf_net [get_bd_intf_nets processing_system7_0_axi_periph_M03_AXI] [get_bd_intf_pins AXI_Lite/M03_AXI] [get_bd_intf_pins ila_0/SLOT_0_AXI]

  # Create port connections
  connect_bd_net -net AXI_FIFO_Data_interrupt [get_bd_pins AXI_FIFO_Data/interrupt] [get_bd_pins xlconcat_0/In4]
  connect_bd_net -net AXI_FIFO_FFT_Config_interrupt [get_bd_pins AXI_FIFO_FFT_Config/interrupt] [get_bd_pins xlconcat_0/In5]
  connect_bd_net -net AXI_VGA_0_HSync [get_bd_ports HSync] [get_bd_pins AXI_VGA_0/HSync]
  connect_bd_net -net AXI_VGA_0_RGB [get_bd_ports RGB] [get_bd_pins AXI_VGA_0/RGB]
  connect_bd_net -net AXI_VGA_0_VSync [get_bd_ports VSync] [get_bd_pins AXI_VGA_0/VSync]
  connect_bd_net -net Net [get_bd_pins Processing_System_0/FCLK_RESET0_N] [get_bd_pins rst_processing_system7_0_100M/aux_reset_in] [get_bd_pins rst_processing_system7_0_100M/ext_reset_in]
  connect_bd_net -net System_Clock_clk_out1 [get_bd_pins AXI_VGA_0/Clock_VGA] [get_bd_pins System_Clock/clk_out1]
  connect_bd_net -net XADC_Wizard_ip2intc_irpt [get_bd_pins XADC_Wizard/ip2intc_irpt] [get_bd_pins xlconcat_0/In0]
  connect_bd_net -net axi_dma_0_mm2s_introut [get_bd_pins AXI_DMA_0/mm2s_introut] [get_bd_pins xlconcat_0/In2]
  connect_bd_net -net axi_dma_0_s2mm_introut [get_bd_pins AXI_DMA_0/s2mm_introut] [get_bd_pins xlconcat_0/In3]
  connect_bd_net -net axi_gpio_0_ip2intc_irpt [get_bd_pins AXI_GPIO_IO/ip2intc_irpt] [get_bd_pins xlconcat_0/In1]
  connect_bd_net -net clk_in1_1 [get_bd_ports Clock_In] [get_bd_pins System_Clock/clk_in1]
  connect_bd_net -net processing_system7_0_FCLK_CLK0 [get_bd_pins AXI_DATA_WIDTH_FFT_CONFIG/aclk] [get_bd_pins AXI_DATA_WIDTH_FFT_RX/aclk] [get_bd_pins AXI_DATA_WIDTH_FFT_TX/aclk] [get_bd_pins AXI_DMA_0/m_axi_mm2s_aclk] [get_bd_pins AXI_DMA_0/m_axi_s2mm_aclk] [get_bd_pins AXI_DMA_0/s_axi_lite_aclk] [get_bd_pins AXI_FIFO_Data/s_axi_aclk] [get_bd_pins AXI_FIFO_FFT_Config/s_axi_aclk] [get_bd_pins AXI_GPIO_IO/s_axi_aclk] [get_bd_pins AXI_GPIO_Out/s_axi_aclk] [get_bd_pins AXI_HP0/ACLK] [get_bd_pins AXI_HP0/M00_ACLK] [get_bd_pins AXI_HP0/S00_ACLK] [get_bd_pins AXI_HP0/S01_ACLK] [get_bd_pins AXI_HP0/S02_ACLK] [get_bd_pins AXI_Lite/ACLK] [get_bd_pins AXI_Lite/M00_ACLK] [get_bd_pins AXI_Lite/M01_ACLK] [get_bd_pins AXI_Lite/M02_ACLK] [get_bd_pins AXI_Lite/M03_ACLK] [get_bd_pins AXI_Lite/M04_ACLK] [get_bd_pins AXI_Lite/M05_ACLK] [get_bd_pins AXI_Lite/M06_ACLK] [get_bd_pins AXI_Lite/S00_ACLK] [get_bd_pins AXI_VGA_0/s00_axi_aclk] [get_bd_pins Processing_System_0/FCLK_CLK0] [get_bd_pins Processing_System_0/M_AXI_GP0_ACLK] [get_bd_pins Processing_System_0/S_AXI_HP0_ACLK] [get_bd_pins XADC_Wizard/s_axi_aclk] [get_bd_pins XFFT/aclk] [get_bd_pins ila_0/clk] [get_bd_pins rst_processing_system7_0_100M/slowest_sync_clk]
  connect_bd_net -net rst_processing_system7_0_100M_interconnect_aresetn [get_bd_pins AXI_HP0/ARESETN] [get_bd_pins AXI_Lite/ARESETN] [get_bd_pins System_Clock/resetn] [get_bd_pins rst_processing_system7_0_100M/interconnect_aresetn]
  connect_bd_net -net rst_processing_system7_0_100M_peripheral_aresetn [get_bd_pins AXI_DATA_WIDTH_FFT_CONFIG/aresetn] [get_bd_pins AXI_DATA_WIDTH_FFT_RX/aresetn] [get_bd_pins AXI_DATA_WIDTH_FFT_TX/aresetn] [get_bd_pins AXI_DMA_0/axi_resetn] [get_bd_pins AXI_FIFO_Data/s_axi_aresetn] [get_bd_pins AXI_FIFO_FFT_Config/s_axi_aresetn] [get_bd_pins AXI_GPIO_IO/s_axi_aresetn] [get_bd_pins AXI_GPIO_Out/s_axi_aresetn] [get_bd_pins AXI_HP0/M00_ARESETN] [get_bd_pins AXI_HP0/S00_ARESETN] [get_bd_pins AXI_HP0/S01_ARESETN] [get_bd_pins AXI_HP0/S02_ARESETN] [get_bd_pins AXI_Lite/M00_ARESETN] [get_bd_pins AXI_Lite/M01_ARESETN] [get_bd_pins AXI_Lite/M02_ARESETN] [get_bd_pins AXI_Lite/M03_ARESETN] [get_bd_pins AXI_Lite/M04_ARESETN] [get_bd_pins AXI_Lite/M05_ARESETN] [get_bd_pins AXI_Lite/M06_ARESETN] [get_bd_pins AXI_Lite/S00_ARESETN] [get_bd_pins AXI_VGA_0/s00_axi_aresetn] [get_bd_pins XADC_Wizard/s_axi_aresetn] [get_bd_pins XFFT/aresetn] [get_bd_pins rst_processing_system7_0_100M/peripheral_aresetn]
  connect_bd_net -net xlconcat_0_dout [get_bd_pins Processing_System_0/IRQ_F2P] [get_bd_pins xlconcat_0/dout]

  # Create address segments
  create_bd_addr_seg -range 0x20000000 -offset 0x0 [get_bd_addr_spaces AXI_DMA_0/Data_MM2S] [get_bd_addr_segs Processing_System_0/S_AXI_HP0/HP0_DDR_LOWOCM] SEG_Processing_System_0_HP0_DDR_LOWOCM
  create_bd_addr_seg -range 0x20000000 -offset 0x0 [get_bd_addr_spaces AXI_DMA_0/Data_S2MM] [get_bd_addr_segs Processing_System_0/S_AXI_HP0/HP0_DDR_LOWOCM] SEG_Processing_System_0_HP0_DDR_LOWOCM
  create_bd_addr_seg -range 0x10000 -offset 0x40400000 [get_bd_addr_spaces Processing_System_0/Data] [get_bd_addr_segs AXI_DMA_0/S_AXI_LITE/Reg] SEG_AXI_DMA_0_Reg
  create_bd_addr_seg -range 0x10000 -offset 0x43C00000 [get_bd_addr_spaces Processing_System_0/Data] [get_bd_addr_segs AXI_FIFO_Data/S_AXI/Mem0] SEG_AXI_FIFO_Data_Mem0
  create_bd_addr_seg -range 0x10000 -offset 0x43C10000 [get_bd_addr_spaces Processing_System_0/Data] [get_bd_addr_segs AXI_FIFO_FFT_Config/S_AXI/Mem0] SEG_AXI_FIFO_FFT_Config_Mem0
  create_bd_addr_seg -range 0x10000 -offset 0x41200000 [get_bd_addr_spaces Processing_System_0/Data] [get_bd_addr_segs AXI_GPIO_IO/S_AXI/Reg] SEG_AXI_GPIO_IO_Reg
  create_bd_addr_seg -range 0x10000 -offset 0x43C30000 [get_bd_addr_spaces Processing_System_0/Data] [get_bd_addr_segs AXI_VGA_0/S00_AXI/Reg] SEG_AXI_VGA_0_Reg
  create_bd_addr_seg -range 0x10000 -offset 0x43C20000 [get_bd_addr_spaces Processing_System_0/Data] [get_bd_addr_segs XADC_Wizard/s_axi_lite/Reg] SEG_XADC_Wizard_Reg
  create_bd_addr_seg -range 0x10000 -offset 0x41210000 [get_bd_addr_spaces Processing_System_0/Data] [get_bd_addr_segs AXI_GPIO_Out/S_AXI/Reg] SEG_axi_gpio_0_Reg

  # Perform GUI Layout
  regenerate_bd_layout -layout_string {
   da_ps7_cnt: "1",
   guistr: "# # String gsaved with Nlview 6.5.5  2015-06-26 bk=1.3371 VDI=38 GEI=35 GUI=JA:1.8
#  -string -flagsOSRD
preplace port DDR -pg 1 -y 520 -defaultsOSRD
preplace port HSync -pg 1 -y 220 -defaultsOSRD
preplace port VSync -pg 1 -y 240 -defaultsOSRD
preplace port Button -pg 1 -y 430 -defaultsOSRD
preplace port LED -pg 1 -y 320 -defaultsOSRD
preplace port IIC_0 -pg 1 -y 560 -defaultsOSRD
preplace port FIXED_IO -pg 1 -y 540 -defaultsOSRD
preplace port Clock_In -pg 1 -y 50 -defaultsOSRD
preplace port Vaux14 -pg 1 -y 1070 -defaultsOSRD
preplace port Switch -pg 1 -y 450 -defaultsOSRD
preplace portBus RGB -pg 1 -y 260 -defaultsOSRD
preplace inst AXI_Lite -pg 1 -lvl 3 -y 810 -defaultsOSRD
preplace inst AXI_DATA_WIDTH_FFT_RX -pg 1 -lvl 5 -y 770 -defaultsOSRD
preplace inst rst_processing_system7_0_100M -pg 1 -lvl 1 -y 490 -defaultsOSRD
preplace inst AXI_GPIO_IO -pg 1 -lvl 4 -y 450 -defaultsOSRD
preplace inst AXI_FIFO_Data -pg 1 -lvl 4 -y 930 -defaultsOSRD
preplace inst xlconcat_0 -pg 1 -lvl 1 -y 670 -defaultsOSRD
preplace inst XFFT -pg 1 -lvl 6 -y 800 -defaultsOSRD
preplace inst Processing_System_0 -pg 1 -lvl 2 -y 660 -defaultsOSRD
preplace inst System_Clock -pg 1 -lvl 3 -y 60 -defaultsOSRD
preplace inst AXI_DATA_WIDTH_FFT_CONFIG -pg 1 -lvl 5 -y 900 -defaultsOSRD
preplace inst XADC_Wizard -pg 1 -lvl 1 -y 1070 -defaultsOSRD
preplace inst ila_0 -pg 1 -lvl 1 -y 840 -defaultsOSRD
preplace inst AXI_DATA_WIDTH_FFT_TX -pg 1 -lvl 5 -y 620 -defaultsOSRD -orient R180
preplace inst AXI_HP0 -pg 1 -lvl 3 -y 330 -defaultsOSRD
preplace inst AXI_DMA_0 -pg 1 -lvl 1 -y 270 -defaultsOSRD
preplace inst AXI_FIFO_FFT_Config -pg 1 -lvl 4 -y 740 -defaultsOSRD
preplace inst AXI_VGA_0 -pg 1 -lvl 6 -y 240 -defaultsOSRD
preplace inst AXI_GPIO_Out -pg 1 -lvl 4 -y 320 -defaultsOSRD
preplace netloc AXI_DMA_0_M_AXI_MM2S 1 1 2 NJ 210 N
preplace netloc ila_0_TRIG_OUT 1 1 1 460
preplace netloc AXI_Lite_M04_AXI 1 3 1 1340
preplace netloc AXI_VGA_0_VSync 1 6 1 NJ
preplace netloc Processing_System_0_M_AXI_GP0 1 2 1 980
preplace netloc AXI_DATA_WIDTH_FFT_RX_M_AXIS 1 5 1 N
preplace netloc processing_system7_0_axi_periph_M03_AXI 1 0 4 80 1240 NJ 1240 NJ 1240 1280
preplace netloc processing_system7_0_axi_periph_M00_AXI 1 3 1 1330
preplace netloc Processing_System_0_IIC_0 1 2 5 NJ 540 NJ 540 NJ 540 NJ 540 NJ
preplace netloc AXI_DATA_WIDTH_FFT_TX_M_AXIS 1 3 2 1370 620 NJ
preplace netloc AXI_VGA_0_HSync 1 6 1 NJ
preplace netloc clk_in1_1 1 0 3 NJ 50 NJ 50 NJ
preplace netloc AXI_FIFO_Data_interrupt 1 0 5 60 1260 NJ 1260 NJ 1260 NJ 1260 1690
preplace netloc AXI_Lite_M02_AXI 1 0 4 70 120 NJ 120 NJ 120 1290
preplace netloc System_Clock_clk_out1 1 3 3 NJ 50 NJ 50 1950
preplace netloc AXI_FIFO_FFT_Config_interrupt 1 0 5 70 1270 NJ 1270 NJ 1270 NJ 1270 1700
preplace netloc axis_dwidth_converter_0_M_AXIS1 1 5 1 1970
preplace netloc axi_mem_intercon_M00_AXI 1 1 3 470 450 NJ 510 1280
preplace netloc Processing_System_0_TRIGGER_OUT_0 1 0 3 20 100 NJ 100 920
preplace netloc AXI_Lite_M01_AXI 1 3 1 1320
preplace netloc axi_dma_0_s2mm_introut 1 0 2 70 380 430
preplace netloc rst_processing_system7_0_100M_peripheral_aresetn 1 0 6 40 390 450 390 960 560 1360 1030 1730 700 1960
preplace netloc AXI_DMA_0_M_AXI_S2MM 1 1 2 NJ 230 N
preplace netloc axi_gpio_0_GPIO1 1 4 3 NJ 320 NJ 320 NJ
preplace netloc AXI_Lite_M05_AXI 1 3 1 1310
preplace netloc AXI_FIFO_Data_AXI_STR_TXD 1 4 1 1690
preplace netloc XFFT_M_AXIS_DATA 1 5 2 NJ 640 2340
preplace netloc XADC_Wizard_ip2intc_irpt 1 0 2 80 400 430
preplace netloc xlconcat_0_dout 1 1 1 450
preplace netloc Processing_System_0_DDR 1 2 5 NJ 520 NJ 520 NJ 520 NJ 520 NJ
preplace netloc Vaux14_1 1 0 1 NJ
preplace netloc axi_gpio_0_GPIO2 1 4 3 NJ 450 NJ 450 NJ
preplace netloc processing_system7_0_FIXED_IO 1 2 5 NJ 550 NJ 550 NJ 550 NJ 550 NJ
preplace netloc AXI_Lite_M06_AXI 1 3 3 1300 210 NJ 210 NJ
preplace netloc axi_dma_0_mm2s_introut 1 0 2 80 770 440
preplace netloc axi_gpio_0_GPIO 1 4 3 NJ 430 NJ 430 NJ
preplace netloc axi_gpio_0_ip2intc_irpt 1 0 5 50 140 NJ 140 NJ 140 NJ 140 1730
preplace netloc AXI_VGA_0_RGB 1 6 1 NJ
preplace netloc Net 1 0 3 60 130 NJ 130 910
preplace netloc rst_processing_system7_0_100M_interconnect_aresetn 1 1 2 NJ 440 950
preplace netloc processing_system7_0_FCLK_CLK0 1 0 6 30 1250 470 870 970 530 1350 640 1720 690 1950
preplace netloc AXI_FIFO_FFT_Config_AXI_STR_TXD 1 4 1 1710
preplace netloc AXI_DMA_0_M_AXIS_MM2S 1 0 2 80 160 430
levelinfo -pg 1 0 260 690 1130 1530 1840 2150 2360 -top 0 -bot 1280
",
   }
{
   da_axi4_cnt: "18",
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


