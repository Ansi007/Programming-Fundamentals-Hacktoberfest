import array as arr

a = arr.array('f', [1.1, 3.5, 4.5])
print(a)
a = arr.array('f', [1.1, 3.5, 4])
print(a)
a = arr.array('f', [1.1, 3.5, '4'])
print(a)




'''
When to use arrays?
Lists are much more flexible than arrays. 
They can store elements of different data types 
including strings. And, if you need to do 
mathematical computation on arrays and matrices, 
you are much better off using something like NumPy.

So, what are the uses of arrays created from 
the Python array module?
The array.array type is just a thin wrapper on 
C arrays which provides space-efficient storage 
of basic C-style data types. If you need to 
allocate an array that you know will not change, 
then arrays can be faster and use less memory 
than lists.

Unless you don't really need arrays (array module 
may be needed to interface with C code), the use 
of the array module is not recommended.
'''