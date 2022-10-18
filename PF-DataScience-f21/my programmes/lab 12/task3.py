import math
def slicingstring(c):
    a = c[-16:]
    m = len(a)-1
    i = 0
    l = ""
    while i < m:
        l = l + str(a[i])
        i = i + 1
    lat = l[-7:]
    long = l[0:7]
    lat = float(lat)
    long = float(long)
    return long,lat
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
def returnstring(index):
    fl = open("pakcities.txt","r")
    i = 0
    while i < index:
        s = ""
        s = fl.readline()
        i = i + 1
    fl.close()
    return s
def chekdistance():
    a = input("enter the name of first city : ")
    b = input("enter the name of second city : ")
    c1 = a.lower()
    c2 = b.lower()
    fl = open("pakcities.txt","r")
    i1 = checkline(c1)
    i2 = checkline(c2)
    s1 = returnstring(i1)
    s2 = returnstring(i2)
    lo1,la1 = slicingstring(s1)
    lo2,la2 = slicingstring(s2)
    dis = calDis(lo1,la1,lo2,la2)
    print("the distance between",c1," and ",c2,"is :",dis)
    fl.close()
chekdistance()








