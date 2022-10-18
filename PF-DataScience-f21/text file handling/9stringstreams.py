import io

sio = io.StringIO('Zero line.\n')

sio.write('First line.\n')
print('Second line.', file=sio)

#contents = sio.getvalue()
#print("0:", contents, "|", sep="")

contents = sio.read(5)
print("1:", contents, "|", sep="")

sio.seek(6)
contents = sio.readline()
print("2:", contents, "|", sep="")

sio.write('Third line.\n')
contents = sio.getvalue()
print("3:", contents, "|", sep="")

sio.seek(9)
sio.write('Fourth line.\n')
contents = sio.getvalue()
print("4:", contents, "|", sep="")

sio.close()
# Close object and discard memory buffer --
# .getvalue() will now raise an exception.
