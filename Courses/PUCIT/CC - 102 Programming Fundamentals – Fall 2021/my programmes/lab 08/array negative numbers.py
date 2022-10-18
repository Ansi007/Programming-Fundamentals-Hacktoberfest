def remneg(a,n):
    i = 0
    while i < n:
        if a[i] < 0:
            a[i] = ""
        else:
            pass
        i = i + 1
def printpos(a,n):
    i = 0
    while i < n:
        if a[i] == "":
           pass
        else:
            print(a[i])
        i = i + 1
def main():
    n = 12
    a =[0]*n
    i = 0
    while i < n:
       a[i] = int(input("enter 12 values one by one"))
       i = i + 1
    remneg(a,n)
    printpos(a,n)
main()



