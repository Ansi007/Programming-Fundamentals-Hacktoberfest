def lcm(a,b):
    if a>b:
        lar = a
    else:
        lar = b
    while(True):
        if (lar%a==0) and (lar%b==0):
            lcm = lar
            return lcm
            break
        else:
            lar = lar +1
    return None
def main():
    a = int(input("enter any number "))
    b = int(input("enter any number "))
    print("finding lcm")
    m = lcm(a,b)
    print("the lcm of ",a,"n",b,"=",m)
main()
