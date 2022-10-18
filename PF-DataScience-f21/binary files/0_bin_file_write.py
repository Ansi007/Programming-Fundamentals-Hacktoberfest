f = open("01.txt", 'wb')
text = [48, 97, 32, 13, 10, 65]
for s in text:
	# 1 is no of byte, big is big endian
	f.write(s.to_bytes(4, byteorder='little'))
f.close()
