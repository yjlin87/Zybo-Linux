#!/bin/bash

# Treiber kompilieren
make

# Testprogramm kompilieren
arm-linux-gnueabi-gcc Driver_Test.c -o Driver_Test

# Programme übertragen
scp Driver_Test root@192.168.178.50:/Software
scp Device.ko root@192.168.178.50:/Software