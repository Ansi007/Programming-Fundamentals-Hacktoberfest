nmr = int(input("enter the range"))
print("prime numbers are:", end = " ")
for n in range(2,nmr):
    for i in range(2,n):
        if(n%i == 0):
            break
    else:
        print(n,end= " ")
