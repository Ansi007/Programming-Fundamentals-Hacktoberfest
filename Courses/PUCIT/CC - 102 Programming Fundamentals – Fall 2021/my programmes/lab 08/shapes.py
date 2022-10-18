def printshape(n):
    k = 0
    i = 1
    while i <= n:
        k = k+i
        print("*"*k)
        i = i + 2
    i = 11
    while i >= 1:
        k = k - i
        print("*"*k)
        i = i - 2
def main():
    l = int(input("enter the number"))
    printshape(l)
main()



