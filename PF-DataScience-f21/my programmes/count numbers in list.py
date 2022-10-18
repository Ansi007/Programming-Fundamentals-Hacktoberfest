a = "idueyfgqe8fg221@#e7217"
i = 0
s = 0
c = 0
while i < len(a):
    if ord(a[i]) >= ord("0") and  ord(a[i]) <= ord("9"):
        s = s + int(a[i])
        c = c + 1
    else:
        pass
    i = i + 1
avg = s/c
print("the sum of all the numbers in the string is",s)
print("the count of all the numbers in the string is",c)
print("the average of all the numbers in the string is",avg)
