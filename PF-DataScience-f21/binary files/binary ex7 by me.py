# Text to Binary
message = "Hello"  # str
binary_message = message.encode('utf-8')
print(type(binary_message))  # bytes

# Python has many built in encodings for different languages,
# and even the Caeser cipher is built in
import codecs
cipher_text = codecs.encode(message, 'rot_13')
print(cipher_text)
