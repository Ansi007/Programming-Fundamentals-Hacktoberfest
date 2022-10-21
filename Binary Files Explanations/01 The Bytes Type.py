"""The Bytes Type
The bytes type in Python is immutable and stores a sequence of values ranging from 0-255 (8-bits). 
You can get the value of a single byte by using an index like an array, but the values 
can not be modified."""

# Create empty bytes
empty_bytes = bytes(4)
print(type(empty_bytes))
print(empty_bytes)
print(empty_bytes[2])   #Accessing a single value


