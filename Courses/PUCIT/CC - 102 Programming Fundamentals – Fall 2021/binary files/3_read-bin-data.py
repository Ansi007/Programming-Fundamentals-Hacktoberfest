import struct

f = open("bin1.txt", 'rb')

s1 = f.read(8)
i1 = f.read(4)
f1 = f.read(4)
e = f.read()

f.close()

print(s1, i1, f1, "[", e, "]")

s2 = s1.decode()
i2 = struct.unpack('i', i1)  # return's tuple
f2 = struct.unpack('f', f1)  # return's tuple

print(s2, i2[0], f2[0])



f = open("bin1.txt", 'rb')
e = f.read()
f.close()

print("[", e, "]")

t = struct.unpack('8sif', e)  # return's tuple
print(t[0].decode(), t[1], t[2])
