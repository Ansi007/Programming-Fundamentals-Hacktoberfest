# Create an int from bytes. Default is unsigned.
some_bytes = b'\x00\xF0'
i = int.from_bytes(some_bytes, byteorder='big')
print(i)

# Create a signed int
i = int.from_bytes(b'\x00\x0F', byteorder='big', signed=True)
print(i)

# Use a list of integers 0-255 as a source of byte values
i = int.from_bytes([255, 0, 0, 0], byteorder='big')
print(i)
