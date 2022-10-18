def chek_EOF(a):
    size = len(a)
    i = 0
    while i < size:
        if a[i] == -1:
            return i
        i = i + 1
def append(ad,nd):
    eof_ad = chek_EOF(ad)
    eof_nd = chek_EOF(nd)
    i = eof_ad
    j = eof_nd
    k = 0
    while k <= j :
        ad[i] = nd[k]
        k = k + 1
        i = i + 1
    return ad
def main():
    ad = [1,2,3,4,5,6,-1,0,0,0,0,0,0]
    nd = [7,8,9,10,-1]
    ad = append(ad,nd)
    print(ad)
main()



