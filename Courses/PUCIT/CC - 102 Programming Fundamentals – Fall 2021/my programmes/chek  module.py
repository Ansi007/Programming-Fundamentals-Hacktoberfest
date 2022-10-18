from bubble_sort import *
n = int(input("enter the length of list "))
a = [0]*n
i = 0
while i < n:
    a[i] = input("enter value ")
    i = i + 1
print("before sorting")
print(a)
print("after sorting")
print(bubble_sort(a))

from binary_search import *
x = int(input("enter value you want to search "))
if binaryseach(a,x):
    print("the number exist in the list")
else:
    print("the number does not exist in the list")
