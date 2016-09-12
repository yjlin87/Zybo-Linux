proc start_step { step } {
  set stopFile ".stop.rst"
  if {[file isfile .stop.rst]} {
    puts ""
    puts "*** Halting run - EA reset detected ***"
    puts ""
    puts ""
    return -code error
  }
  set beginFile ".$step.begin.rst"
  set platform "$::tcl_platform(platform)"
  set user "$::tcl_platform(user)"
  set pid [pid]
  set host ""
  if { [string equal $platform unix] } {
    if { [info exist ::env(HOSTNAME)] } {
      set host $::env(HOSTNAME)
    }
  } else {
    if { [info exist ::env(COMPUTERNAME)] } {
      set host $::env(COMPUTERNAME)
    }
  }
  set ch [open $beginFile w]
  puts $ch "<?xml version=\"1.0\"?>"
  puts $ch "<ProcessHandle Version=\"1\" Minor=\"0\">"
  puts $ch "    <Process Command=\".planAhead.\" Owner=\"$user\" Host=\"$host\" Pid=\"$pid\">"
  puts $ch "    </Process>"
  puts $ch "</ProcessHandle>"
  close $ch
}

proc end_step { step } {
  set endFile ".$step.end.rst"
  set ch [open $endFile w]
  close $ch
}

proc step_failed { step } {
  set endFile ".$step.error.rst"
  set ch [open $endFile w]
  close $ch
}

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000

start_step init_design
set rc [catch {
  create_msg_db init_design.pb
  set_property design_mode GateLvl [current_fileset]
  set_param project.singleFileAddWarning.threshold 0
  set_property webtalk.parent_dir /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.cache/wt [current_project]
  set_property parent.project_path /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.xpr [current_project]
  set_property ip_repo_paths {
  /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.cache/ip
  /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/IP
} [current_project]
  set_property ip_output_repo /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.cache/ip [current_project]
  set_property XPM_LIBRARIES {XPM_CDC XPM_MEMORY} [current_project]
  add_files -quiet /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.runs/Synth/System_wrapper.dcp
  read_xdc -ref System_processing_system7_0_0 -cells inst /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_processing_system7_0_0/System_processing_system7_0_0.xdc
  set_property processing_order EARLY [get_files /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_processing_system7_0_0/System_processing_system7_0_0.xdc]
  read_xdc -prop_thru_buffers -ref System_rst_processing_system7_0_100M_0 -cells U0 /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_rst_processing_system7_0_100M_0/System_rst_processing_system7_0_100M_0_board.xdc
  set_property processing_order EARLY [get_files /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_rst_processing_system7_0_100M_0/System_rst_processing_system7_0_100M_0_board.xdc]
  read_xdc -ref System_rst_processing_system7_0_100M_0 -cells U0 /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_rst_processing_system7_0_100M_0/System_rst_processing_system7_0_100M_0.xdc
  set_property processing_order EARLY [get_files /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_rst_processing_system7_0_100M_0/System_rst_processing_system7_0_100M_0.xdc]
  read_xdc -ref System_xadc_wiz_0_0 -cells U0 /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_xadc_wiz_0_0/System_xadc_wiz_0_0.xdc
  set_property processing_order EARLY [get_files /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_xadc_wiz_0_0/System_xadc_wiz_0_0.xdc]
  read_xdc -prop_thru_buffers -ref System_axi_gpio_0_1 -cells U0 /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_axi_gpio_0_1/System_axi_gpio_0_1_board.xdc
  set_property processing_order EARLY [get_files /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_axi_gpio_0_1/System_axi_gpio_0_1_board.xdc]
  read_xdc -ref System_axi_gpio_0_1 -cells U0 /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_axi_gpio_0_1/System_axi_gpio_0_1.xdc
  set_property processing_order EARLY [get_files /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_axi_gpio_0_1/System_axi_gpio_0_1.xdc]
  read_xdc -ref System_axi_timer_0_0 -cells U0 /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_axi_timer_0_0/System_axi_timer_0_0.xdc
  set_property processing_order EARLY [get_files /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/sources_1/bd/System/ip/System_axi_timer_0_0/System_axi_timer_0_0.xdc]
  read_xdc /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux/Vivado/Hardware/Zybo/Zybo.srcs/constrs_1/new/System.xdc
  link_design -top System_wrapper -part xc7z010clg400-1
  write_hwdef -file System_wrapper.hwdef
  close_msg_db -file init_design.pb
} RESULT]
if {$rc} {
  step_failed init_design
  return -code error $RESULT
} else {
  end_step init_design
}

start_step opt_design
set rc [catch {
  create_msg_db opt_design.pb
  opt_design 
  write_checkpoint -force System_wrapper_opt.dcp
  report_drc -file System_wrapper_drc_opted.rpt
  close_msg_db -file opt_design.pb
} RESULT]
if {$rc} {
  step_failed opt_design
  return -code error $RESULT
} else {
  end_step opt_design
}

start_step place_design
set rc [catch {
  create_msg_db place_design.pb
  implement_debug_core 
  place_design 
  write_checkpoint -force System_wrapper_placed.dcp
  report_io -file System_wrapper_io_placed.rpt
  report_utilization -file System_wrapper_utilization_placed.rpt -pb System_wrapper_utilization_placed.pb
  report_control_sets -verbose -file System_wrapper_control_sets_placed.rpt
  close_msg_db -file place_design.pb
} RESULT]
if {$rc} {
  step_failed place_design
  return -code error $RESULT
} else {
  end_step place_design
}

start_step route_design
set rc [catch {
  create_msg_db route_design.pb
  route_design 
  write_checkpoint -force System_wrapper_routed.dcp
  report_drc -file System_wrapper_drc_routed.rpt -pb System_wrapper_drc_routed.pb
  report_timing_summary -warn_on_violation -max_paths 10 -file System_wrapper_timing_summary_routed.rpt -rpx System_wrapper_timing_summary_routed.rpx
  report_power -file System_wrapper_power_routed.rpt -pb System_wrapper_power_summary_routed.pb -rpx System_wrapper_power_routed.rpx
  report_route_status -file System_wrapper_route_status.rpt -pb System_wrapper_route_status.pb
  report_clock_utilization -file System_wrapper_clock_utilization_routed.rpt
  close_msg_db -file route_design.pb
} RESULT]
if {$rc} {
  step_failed route_design
  return -code error $RESULT
} else {
  end_step route_design
}

start_step write_bitstream
set rc [catch {
  create_msg_db write_bitstream.pb
  catch { write_mem_info -force System_wrapper.mmi }
  write_bitstream -force System_wrapper.bit 
  catch { write_sysdef -hwdef System_wrapper.hwdef -bitfile System_wrapper.bit -meminfo System_wrapper.mmi -file System_wrapper.sysdef }
  catch {write_debug_probes -quiet -force debug_nets}
  close_msg_db -file write_bitstream.pb
} RESULT]
if {$rc} {
  step_failed write_bitstream
  return -code error $RESULT
} else {
  end_step write_bitstream
}

