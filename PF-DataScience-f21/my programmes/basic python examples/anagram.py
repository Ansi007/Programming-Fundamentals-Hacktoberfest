# chek two strings are anagram
a = str(input("enter first word  "))
b = str(input("enter second word "))
k = len(a)
i = 0
m = [0]*k
while i < k:
    m[i] = a[i]
    i = i+1
if k == (len(b)):
    t = 0
    while t < k:
        if b[t] not in m:
            print("both words are not anagram of each other")
            break
        else:
            t = t + 1
    print("both words are anagram of each other")
else:
    print("both words are not anagram of each other")
