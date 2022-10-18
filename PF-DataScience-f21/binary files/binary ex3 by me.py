# Cast bytes to bytearray
mutable_bytes = bytearray(b'\x00\x0F')

empty_bytes = bytes(4)

# Bytearray allows modification
mutable_bytes[0] = 255
mutable_bytes.append(255)
print(mutable_bytes)

# Cast bytearray back to bytes
immutable_bytes = bytes(mutable_bytes)
print(immutable_bytes)
