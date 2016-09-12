import sys
import gdb

# Update module path.
dir_ = '/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/sysroots/x86_64-linux/usr/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from gobject import register
register (gdb.current_objfile ())
