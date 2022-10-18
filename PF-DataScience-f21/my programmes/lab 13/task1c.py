def checkline(n):
    fl = open("data-fixed-length.txt","r")
    index = 0
    for line in fl:
        index += 1
        if n in line:
            fl.close()
            return index
def chnageName(rll,fl):
    rll = rll.upper()
    index = checkline(rll)
    f = open(fl,"r+")
    f.seek(0)
    m = f.readline()
    c =len(m)+1
    f.seek(0)
    ni = index
    if ni != 0:
        lb = ni - 1
        n = c*lb
    n = f.seek(n)
    rollno = f.read(10)
    j = f.tell()
    k = input("enter changed name: ")
    if len(k)<25:
        dif = 25 - len(k)
        for i in range(dif):
            k = k +" "
    f.seek(j)
    f.write(k)
    ln = f.tell()
    jj = ln + (c-len(k))
    f.seek(jj-10)
    rollno = f.read(9)
    j = f.tell()+1
    f.seek(j)
    f.write(k)
    ln = f.tell()
    jj = ln + (c-len(k))
    f.seek(jj-10)
    rollno = f.read(9)
    j = f.tell()+1
    f.seek(j)
    f.write(k)
    print("the changed name of roll no",rll,"is: ",k)
def main():
    fl = "data-fixed-length.txt"
    rll = input("enter the roll no whose name you want to change")
    chnageName(rll,fl)
main()


