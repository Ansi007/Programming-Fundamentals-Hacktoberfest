"""Packing and unpacking requires a string that defines how the binary data 
is structured. It needs to know which bytes represent values. It needs to 
know whether the entire set of bytes represets characters or if it is a 
sequence of 4-byte integers. It can be structured in any number of ways. 
The format strings can be simple or complex. In this example I am packing a 
single four-byte integer followed by two characters. The letters i and c 
represent integers and characters."""

import struct

# Packing values to bytes
# The first parameter is the format string. Here it specifies the data is structured
# with a single four-byte integer followed by two characters.
# The rest of the parameters are the values for each item in order
binary_data = struct.pack("icc", 8499000, b'A', b'Z')
print(binary_data)

# When unpacking, you receive a tuple of all data in the same order
tuple_of_data = struct.unpack("icc", binary_data)
print(tuple_of_data)

# For more information on format strings and endian-nes, refer to
# https://docs.python.org/3.5/library/struct.html