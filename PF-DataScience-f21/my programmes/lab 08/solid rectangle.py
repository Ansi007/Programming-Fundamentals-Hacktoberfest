def printrec(h,w,c):
    c = str(c)
    i = 1
    while i <= h:
        print(c*w)
        i = i + 1
def main():
    h = int(input("enter the height of rectangle"))
    w = int(input("enter the width of rectangle"))
    c = str(input("enter the filling character of rectangle"))
    printrec(h,w,c)
main()
