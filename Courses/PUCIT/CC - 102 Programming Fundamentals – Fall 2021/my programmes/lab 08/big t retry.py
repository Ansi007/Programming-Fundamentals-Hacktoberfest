def printrec(h,w,c):
    c = str(c)
    i = 1
    while i <= h:
        print(c*w)
        i = i + 1
def blankspace_n(w1,w2):
    if w1%2==0 and w2%2==0:
        l = ((w1/2)-(w2/2))
    elif w1%2!=0 and w2%2!=0:
        l = (((w1+1)/2)-((w2+1)/2))
    elif w1%2==0 and w2%2!=0:
        l = ((w1/2)-((w2+1)/2))
    else:
        l = (((w1+1)/2)-(w2/2))
    return l

def toprec(h,w,c):
    if h < w:
        printrec(h,w,c)
    else:
        print("invalid input for top reactangle")
def bottomrec(h,w,c,sp):
    c = str(c)
    sp = int(sp)
    i = 1
    m = str(" ")
    while i <= h:
        if h > w:
            print(m*sp,end="")
            print(c*w)
        elif h < w:
            print("invalid input for bottom rectangle")
        i = i + 1
def main():
    print("enter input for top rectangle of T")
    h1 = int(input("enter the height of rectangle"))
    w1 = int(input("enter the width of rectangle"))
    c1 = str(input("enter the filling character of rectangle"))
    print("enter input for bottom rectangle of T")
    h2 = int(input("enter the height of rectangle"))
    w2 = int(input("enter the width of rectangle"))
    c2 = str(input("enter the filling character of rectangle"))
    l = blankspace_n(w1,w2)
    toprec(h1,w1,c1)
    bottomrec(h2,w2,c2,l)
main()




