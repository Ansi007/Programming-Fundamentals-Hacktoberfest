def fib_withoutaray():
    n = 1
    m = int(input("enter how many fibbonacci numers you want to print "))
    s = 0
    while n <= m:
        s = s+n
        print(s," ",end="")
        n = n + 1
fib_withoutaray()
