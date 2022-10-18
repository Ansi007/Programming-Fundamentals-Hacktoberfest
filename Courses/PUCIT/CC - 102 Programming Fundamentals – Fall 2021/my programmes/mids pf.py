x = [2,3,4,1,5,6,7,9,0]
y = [0,2,7,8,7,5,5,8,0,0,3]
ax = len(x)
ay = len(y)
i = 0
j = 0
while i < ax:
    while j < ay:
        acc = 0
        if x[i] == y[j]:
            acc = acc + 1
        j = j+1
    if acc > 0:
        print("the occurence of",x[i],"in y is =",acc)
    else:
        print(x[i],"does not exist in the y array")
    i = i + 1

