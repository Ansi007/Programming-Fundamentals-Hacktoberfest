import io
binary_stream = io.BytesIO()
# Binary data and strings are different types, so a str
# must be encoded to binary using ascii, utf-8, or other.
binary_stream.write("Hello, world!\n".encode('ascii'))
binary_stream.write("Hello, world!\n".encode('utf-8'))

binary_stream.seek(0)

# Read all data from the buffer
stream_data = binary_stream.read()
# The stream_data is type 'bytes', immutable
print(type(stream_data))
print(stream_data)
binary_stream.seek(2)
binary_stream.write("lalalal\n".encode('utf-8'))

# To modify the actual contents of the existing buffer
# use getbuffer() to get an object you can modify.
# Modifying this object updates the underlying BytesIO buffer
mutable_buffer = binary_stream.getbuffer()
print(type(mutable_buffer))  # class 'memoryview'
mutable_buffer[0] = 0xFF

# Re-read the original stream. Contents will be modified
# because we modified the mutable buffer
binary_stream.seek(0)
print(binary_stream.read())
