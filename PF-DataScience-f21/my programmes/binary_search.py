def binaryseach(a,x):
    l = len(a)
    if l%2 == 0:
        divlist(a,x,0,l)
    else:
        l = l + 1
        divlist(a,x,0,l)
def divlist(a,x,low,high):
    mid = ((low+high)//2)
    while mid >= 1:
        if a[mid] == x:
            return True
        elif x > a[mid]:
            low = mid + 1
            divlist(a,x,low,high)
        else:
            high = mid - 1
            divlist(a,x,low,high)
    else:
        return False



