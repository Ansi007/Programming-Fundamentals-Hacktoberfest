# Encode binary data to a base 64 string
binary_data = b'\x00\xFF\x00\xFF'

# Use the codecs module to encode
import codecs
base64_data = codecs.encode(binary_data, 'base64')
print(base64_data)

# Or use the binascii module
import binascii
base64_data = binascii.b2a_base64(binary_data)
print(base64_data)

# The base64_string is still a bytes type
# It may need to be decoded to an ASCII string
print(base64_data.decode('utf-8'))

# Decoding is done similarly
print(codecs.decode(base64_data, 'base64'))
print(binascii.a2b_base64(base64_data))