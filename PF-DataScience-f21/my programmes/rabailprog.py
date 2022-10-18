def isMaximum(a,size):
    x = 0
    max=0
    while x < size-1:
        if a[x] > a[x + 1]:
            max = a[x]
        else:
            max = a[x + 1]
        x = x + 1
    return max
def main():
    size = int(input("size:"))
    a = [0] * size
    i = 0
    while i < size:
        a[i] = int(input("enter values:"))
        i = i + 1
    print("maximum:",isMaximum(a,size))
main()
