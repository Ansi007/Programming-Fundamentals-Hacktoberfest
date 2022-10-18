def printline(ch,i):
    l = ord(ch)
    b =""
    while l <= i:
        b = b + chr(l)
        l = l + 1
    return b
def printspace(k):
    sp = " "
    sp = sp*int(k)
    return sp
def printpyrimmaid(a,z):
    i = ord(z)
    j = ord(a)
    x = 1
    diff = (i-j)+1
    spad = (diff)/2
    while x <= diff:
        print(printspace(spad),end="")
        print(printline(a,j))
        spad = spad - 1
        j = j + 2
        x = x+2
def main():
    a = input("enter the begginig character ")
    z = input("enter the ending character ")
    printpyrimmaid(a,z)
main()



