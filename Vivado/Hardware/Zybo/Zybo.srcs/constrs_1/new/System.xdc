# Switches
set_property IOSTANDARD LVCMOS33 [get_ports {switch_tri_i[3]}]
set_property IOSTANDARD LVCMOS33 [get_ports {switch_tri_i[2]}]
set_property IOSTANDARD LVCMOS33 [get_ports {switch_tri_i[1]}]
set_property IOSTANDARD LVCMOS33 [get_ports {switch_tri_i[0]}]

set_property PACKAGE_PIN T16 [get_ports {switch_tri_i[3]}]
set_property PACKAGE_PIN W13 [get_ports {switch_tri_i[2]}]
set_property PACKAGE_PIN P15 [get_ports {switch_tri_i[1]}]
set_property PACKAGE_PIN G15 [get_ports {switch_tri_i[0]}]

# Buttons
set_property IOSTANDARD LVCMOS33 [get_ports {button_tri_i[3]}]
set_property IOSTANDARD LVCMOS33 [get_ports {button_tri_i[2]}]
set_property IOSTANDARD LVCMOS33 [get_ports {button_tri_i[1]}]
set_property IOSTANDARD LVCMOS33 [get_ports {button_tri_i[0]}]

set_property PACKAGE_PIN Y16 [get_ports {button_tri_i[3]}]
set_property PACKAGE_PIN V16 [get_ports {button_tri_i[2]}]
set_property PACKAGE_PIN P16 [get_ports {button_tri_i[1]}]
set_property PACKAGE_PIN R18 [get_ports {button_tri_i[0]}]

# I2C
#set_property PACKAGE_PIN N17 [get_ports iic_0_sda_io]
#set_property PACKAGE_PIN N18 [get_ports iic_0_scl_io]
#set_property IOSTANDARD LVCMOS33 [get_ports iic_0_scl_io]
#set_property IOSTANDARD LVCMOS33 [get_ports iic_0_sda_io]

# LEDs
#set_property IOSTANDARD LVCMOS33 [get_ports {led_tri_o[3]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {led_tri_o[2]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {led_tri_o[1]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {led_tri_o[0]}]

#set_property PACKAGE_PIN D18 [get_ports {led_tri_o[3]}]
#set_property PACKAGE_PIN G14 [get_ports {led_tri_o[2]}]
#set_property PACKAGE_PIN M15 [get_ports {led_tri_o[1]}]
#set_property PACKAGE_PIN M14 [get_ports {led_tri_o[0]}]

# VGA
#set_property IOSTANDARD LVCMOS33 [get_ports HSync]
#set_property IOSTANDARD LVCMOS33 [get_ports VSync]

#set_property PACKAGE_PIN P19 [get_ports HSync]
#set_property PACKAGE_PIN R19 [get_ports VSync]

#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[15]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[14]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[13]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[12]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[11]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[10]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[9]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[8]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[7]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[6]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[5]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[4]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[3]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[2]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[1]}]
#set_property IOSTANDARD LVCMOS33 [get_ports {RGB[0]}]

#set_property PACKAGE_PIN G19 [get_ports {RGB[15]}]
#set_property PACKAGE_PIN J18 [get_ports {RGB[14]}]
#set_property PACKAGE_PIN K19 [get_ports {RGB[13]}]
#set_property PACKAGE_PIN M20 [get_ports {RGB[12]}]
#set_property PACKAGE_PIN P20 [get_ports {RGB[11]}]
#set_property PACKAGE_PIN F20 [get_ports {RGB[10]}]
#set_property PACKAGE_PIN H20 [get_ports {RGB[9]}]
#set_property PACKAGE_PIN J19 [get_ports {RGB[8]}]
#set_property PACKAGE_PIN L19 [get_ports {RGB[7]}]
#set_property PACKAGE_PIN N20 [get_ports {RGB[6]}]
#set_property PACKAGE_PIN H18 [get_ports {RGB[5]}]
#set_property PACKAGE_PIN F19 [get_ports {RGB[4]}]
#set_property PACKAGE_PIN G20 [get_ports {RGB[3]}]
#set_property PACKAGE_PIN J20 [get_ports {RGB[2]}]
#set_property PACKAGE_PIN L20 [get_ports {RGB[1]}]
#set_property PACKAGE_PIN M19 [get_ports {RGB[0]}]

# XADC
set_property PACKAGE_PIN N16 [get_ports Vaux14_v_n]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux14_v_n]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux14_v_p]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux6_v_n]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux6_v_p]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux7_v_n]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux7_v_p]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux15_v_n]
set_property IOSTANDARD LVCMOS33 [get_ports Vaux15_v_p]

# PWM
set_property IOSTANDARD LVCMOS33 [get_ports PWM]
set_property PACKAGE_PIN M14 [get_ports PWM]