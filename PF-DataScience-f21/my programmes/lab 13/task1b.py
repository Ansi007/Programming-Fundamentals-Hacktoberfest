def avg(f):
    f.seek(0)
    c = f.readline()
    j = len(c)+1
    f.seek(0)
    f.seek((2*j))
    a = f.tell()
    f.seek(a+j)
    nm = f.read(25)
    f.read(24)
    num = int(f.read(2))
    f.read(1)
    num = num + int(f.read(2))
    f.read(1)
    num = num + int(f.read(2))
    f.read(1)
    print("the average of pf of ",nm,"is:",round(num/3),2)
    overall = 0
    overall = num + overall
    for i in range(8):
        num = 0
        n = f.tell()
        f.seek((2*j+n))
        nm = f.read(25)
        f.read(24)
        num = int(f.read(2))
        f.read(1)
        num = num + int(f.read(2))
        f.read(1)
        num = num + int(f.read(2))
        f.read(1)
        print("the average of pf of ",nm,"is:",round((num/3),2))
        overall = num + overall
    print("the overall result of pf is",round((overall/(3*9)),2))
def main():
    f = open("data-fixed-length.txt","r")
    avg(f)
main()
