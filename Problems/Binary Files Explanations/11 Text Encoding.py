# Binary to Text
from numpy import byte


binary_data = b'I am text.'
text = binary_data.decode('utf-8')
print(text)

binary_data = bytes([65, 66, 67])  # ASCII values for A, B, C
text = binary_data.decode('utf-8')
print(text)


# Text to Binary
message = "Hello"  # str
binary_message = message.encode('utf-8')
print(type(binary_message))  # bytes
print("This =",type(bytes(message,'UTF-8')))    # Both of these are looking same

# Python has many built in encodings for different languages,
# and even the Caeser cipher is built in
import codecs
cipher_text = codecs.encode(message, 'rot_13')
print(cipher_text)