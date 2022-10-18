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
def record(k,f):
    f.seek(0)
    c = f.readline()
    j = len(c)+1
    f.seek(0)
    f.seek((2*j))
    a = f.tell()
    sp = (j*3)*(k-1)
    f.seek(a+sp)
    nm = f.read(25)
    f.read(24)
    itc_md = int(f.read(2))
    f.read(1)
    itc_ss = int(f.read(2))
    f.read(1)
    itc_fn = int(f.read(2))
    f.read(1)
    itc_tot = itc_fn+itc_md+itc_ss
    ind = f.tell()
    ind = ind + 49
    f.seek(ind)
    pf_md = int(f.read(2))
    f.read(1)
    pf_ss = int(f.read(2))
    f.read(1)
    pf_fn = int(f.read(2))
    f.read(1)
    pf_tot = pf_fn+pf_md+pf_ss
    ind = f.tell()
    ind = ind + 49
    f.seek(ind)
    dld_md = int(f.read(2))
    f.read(1)
    dld_ss = int(f.read(2))
    f.read(1)
    dld_fn = int(f.read(2))
    f.read(1)
    dld_tot = dld_fn+dld_md+dld_ss
    name ="{0:26}".format(nm)
    crs ="{0:>9}".format("Course")
    ttl = "{0:>6}".format("Total")
    grd = "{0:>7}".format("Grade")
    print(name)
    print(crs+ttl+grd)
    sub0 = "{0:^9}".format("ITC")
    sub0tot = "{0:>6}".format(itc_tot)
    sub0grd = "{0:^7}".format(grad(itc_tot))
    print(sub0+sub0tot+sub0grd)
    sub1= "{0:^9}".format("PF")
    sub1tot = "{0:>6}".format(pf_tot)
    sub1grd = "{0:^7}".format(grad(pf_tot))
    print(sub1+sub1tot+sub1grd)
    sub2= "{0:^9}".format("DLD")
    sub2tot = "{0:>6}".format(dld_tot)
    sub2grd = "{0:^7}".format(grad(dld_tot))
    print(sub2+sub2tot+sub2grd)
    print("   ================")
    opm = "{0:^9}".format("OPM")
    tot = "{0:>6}".format(round(((itc_tot+pf_tot+dld_tot)/3),2))
    opgrad = "{0:^7}".format(grad((itc_tot+pf_tot+dld_tot)/3))
    print(opm+tot+opgrad)
def main():
    f = open("data-fixed-length.txt","r")
    k = int(input("from 1 to 9,Enter the number of student whom you want to observe the result"))
    record(k,f)
main()

