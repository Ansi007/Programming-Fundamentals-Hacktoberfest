# bubble sort
# this module is not working for the number with 2 or more characters
def swaap(a,b):
    temp = a
    a = b
    b = temp
    return a,b
def bubble_pass(a):
    n = len(a)
    i = 0
    while i < (n-1):
        if isinstance(a[i],str) and isinstance(a[i+1],str):
            if ord(a[i]) > ord(a[i+1]):
                a[i],a[i+1]=swaap(a[i],a[i+1])
        elif isinstance(a[i],str) and isinstance(a[i+1],int):
            a[i],a[i+1]=swaap(a[i],a[i+1])
        elif isinstance(a[i],int) and isinstance(a[i+1],str):
            a[i+1],a[i]=swaap(a[i],a[i+1])
        else:
            if a[i] > a[i+1]:
                a[i],a[i+1]=swaap(a[i],a[i+1])
        i = i + 1
    return a
def bubble_sort(a):
    type_sort(a)
    n = len(a)
    i = 1
    while i <= n:
        bubble_pass(a)
        i = i + 1
    return a
def type_sort(a):
    i = 0
    while i < len(a):
        if len(a[i]) <= 1:
            if(ord(a[i]) >= ord("a") and ord(a[i]) <= ord("z")) or (ord(a[i]) >= ord("A") and ord(a[i]) <= ord("Z")):
                a[i] = str(a[i])
            else:
                a[i] = int(a[i])
        else:
            a[i] = int(a[i])
        i = i + 1
    return a


