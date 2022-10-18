import ctypes

longint = ctypes.c_int
j = longint()
j = 9
print(j**3)

ArrayType = ctypes.py_object * 5
slots = ArrayType()
print(ArrayType)
print(slots)

i = 0
slots[i] = 5-i
i += 1
slots[i] = 5-i
i += 1
slots[i] = 5-i
i += 1
slots[i] = 5-i
i += 1
slots[i] = 5-i

#print(ArrayType)
print(slots)
print(slots[4])


'''

ctype module provides access to C

'''