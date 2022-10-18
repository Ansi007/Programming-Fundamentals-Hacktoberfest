b = int(input("enter any number to check whether it is armstrong or not"))
a = str(b)
k = len(a)
i = 0
s = 0
while i < k:
    m = int(a[i])
    s = s + (m**3)
    i = i+1
if s == b:
    print("armstrong")
else:
    print("not armstrong")
