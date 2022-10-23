# Some bytes to play with
byte1 = int('11110000', 2)  # 240
byte2 = int('00001111', 2)  # 15
byte3 = int('01010101', 2)  # 85

# Ones Complement (Flip the bits)
print("Not ",~byte1)

# AND
print("AND ",byte1 & byte2)

# OR
print("OR ",byte1 | byte2)

# XOR
print("XOR ",byte1 ^ byte3)

# Shifting right will lose the right-most bit
print(byte2 >> 3)

# Shifting left will add a 0 bit on the right side
print(byte2 << 1)

# See if a single bit is set
bit_mask = int('00000001', 2)  # Bit 1
print(bit_mask & byte1)  # Is bit set in byte1?
print(bit_mask & byte2)  # Is bit set in byte2?