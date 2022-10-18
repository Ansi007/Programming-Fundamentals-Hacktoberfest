import gc

class SomeObj:
    h = 90
    def __del__(self):
        print('The object is destroyed.')

obj1 = SomeObj()
obj1 = SomeObj()
#del obj1
#obj1 = None

for i in range(3):
    arr = [0]
    arr[0] = arr

print('Collecting...')
n = gc.collect()
print('Unreachable objects:', n)