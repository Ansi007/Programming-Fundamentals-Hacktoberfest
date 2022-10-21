num = int(input())
st = ""
lim = int(num**(1/2))
for i in range(lim,-1,-1):
    if num & 1 << i == 2**i:
        st = st + "2^"+str(i)+"+"
if st[-1] == "+":
    for i in range(len(st)-1):
        print(st[i],end="")

