"""You might need to know what byte order your system uses. Byte order refers to big 
endian or little endian. The sys module can provide that value."""


# Find out what byte order your system uses
import sys
print("Native byteorder: ", sys.byteorder)