def grad(n):
    if n >= 0 and n < 50:
        return "F"
    elif n >= 50 and n < 55:
        return "D"
    elif n >= 55 and n < 58:
        return "C-"
    elif n >= 58 and n < 61:
        return "C"
    elif n >= 61 and n < 65:
        return "C+"
    elif n >= 65 and n < 70:
        return "B-"
    elif n >= 70 and n < 75:
        return "B"
    elif n >= 75 and n < 80:
        return "B+"
    elif n >= 80 and n < 85:
        return "A-"
    elif n >= 85 and n < 100:
        return "A"
    else:
        return "invalid data"
def returnName(fname,i):
    #i will be the current index
    a = fname.readline()
    j = len(a)
    l = 0
    fname.seek(i)
    s = ""
    while l < j:
        k = fname.read(1)
        if ord(k) == ord("\t"):
            return s
        else:
            s = s + str(k)
        i = i + 1
    return s
def numindex(fname,i):
    k = fname.readline()
    l = len(k)
    fname.seek(i)
    j = 0
    while j < l:
        c = fname.read(1)
        if str(c) == "0" or str(c) == "1" or str(c) == "2" or str(c) == "3":
            mk = fname.tell()
            fname.seek(mk-1)
            m = int(fname.read(2))
            fname.read(1)
            s = int(fname.read(2))
            fname.read(1)
            f = int(fname.read(2))
            fname.read(1)
            return(m,s,f)
        else:
            j = j + 1

def main():
    rf = open("results_data.txt","r")
    wf = open("results_report.txt","w")
    header = "  Subject  Sessional   Midterm   Final   Total   Grade \n"
    #using two lines to read from required line
    rf.readline()
    rf.readline()
    for k in range(1,10):
        sub0 = "ITC"
        itc = "{0:>9}".format(sub0)
        sub1 = "PF"
        pf = "{0:>9}".format(sub1)
        sub2 = "DLD"
        dld = "{0:>9}".format(sub2)
        i = rf.tell()
        nm = returnName(rf,i)
        ns = str(k)+". "+str(nm)+"\n"
        wf.write(ns)
        wf.write(header)
        i = rf.tell()
        n1,n2,n3 = numindex(rf,i)
        m = "{0:>11}".format(str(n1))
        s = "{0:>10}".format(str(n2))
        f = "{0:>8}".format(str(n3))
        tot = n1+n2+n3
        ftot = "{0:>8}".format(str(tot))
        g = grad(tot)
        g = "{0:>8}".format(str(g))
        k = itc+m+s+f+ftot+g+"\n"
        wf.write(k)
        #================================
        i = rf.tell()
        nm = returnName(rf,i)
        i = rf.tell()
        n1,n2,n3 = numindex(rf,i)
        m = "{0:>11}".format(str(n1))
        s = "{0:>10}".format(str(n2))
        f = "{0:>8}".format(str(n3))
        tot = n1+n2+n3
        ftot = "{0:>8}".format(str(tot))
        g = grad(tot)
        g = "{0:>8}".format(str(g))
        k = pf+m+s+f+ftot+g+"\n"
        wf.write(k)
        #==============================
        i = rf.tell()
        nm = returnName(rf,i)
        i = rf.tell()
        n1,n2,n3 = numindex(rf,i)
        m = "{0:>11}".format(str(n1))
        s = "{0:>10}".format(str(n2))
        f = "{0:>8}".format(str(n3))
        tot = n1+n2+n3
        ftot = "{0:>8}".format(str(tot))
        g = grad(tot)
        g = "{0:>8}".format(str(g))
        k = itc+m+s+f+ftot+g+"\n"
        wf.write(k)
main()






