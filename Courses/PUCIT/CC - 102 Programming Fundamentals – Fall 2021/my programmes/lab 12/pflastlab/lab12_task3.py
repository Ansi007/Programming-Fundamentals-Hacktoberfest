import math
def radconv(n):
    r = n*(math.pi/180)
    return r
def calDis(long1,lat1,long2,lat2):
    radEarth = 6371*10**3
    ln1 = radconv(long1)
    lt1 = radconv(lat1)
    ln2 = radconv(long2)
    lt2 = radconv(lat2)
    difflat = lt2-lt1
    difflong = ln2 - ln1
    a = (math.sin(difflat/2) * math.sin(difflat/2)) + (math.cos(lt1) * math.cos(lt2)) * (math.sin(difflong/2) * math.sin(difflong/2))
    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a))
    d = radEarth*c
    d = d/(10**3)
    d = round(d,4)
    d = str(d) + "km"
    return d
def checkline(n):
    fl = open("pakcities.txt","r")
    index = 0
    for line in fl:
        index += 1
        if n in line:
            fl.close()
            return index
def retnum(index,f):
    i = 0
    f.seek(0)
    m = f.readline()
    c =len(m)
    ni = (index)
    if ni != 0:
        ni = ni*c
    f.seek(ni)
    j = 0
    while j < c:
        k = f.read(1)
        if str(k) == "2" or str(k) == "3":
            mk = f.tell()
            f.seek(mk-1)
            long = float(f.read(7))
            f.read(1)
            lat = float(f.read(7))
            return long,lat
        else:
            j = j + 1
def chekdistance():
    a = input("enter the name of first city : ")
    b = input("enter the name of second city : ")
    c1 = a.lower()
    c2 = b.lower()
    fl = open("pakcities.txt","r")
    i1 = checkline(c1)
    i2 = checkline(c2)
    if i1 > i2:
        lo1,la1 = retnum(i1,fl)
        lo2,la2 = retnum(i2,fl)
    else:
        lo2,la2 = retnum(i2,fl)
        lo1,la1 = retnum(i1,fl)
    dis = calDis(lo1,la1,lo2,la2)
    print("the distance between",c1," and ",c2,"is :",dis)
    fl.close()
chekdistance()


