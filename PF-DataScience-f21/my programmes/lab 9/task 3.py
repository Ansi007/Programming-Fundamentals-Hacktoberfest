from random import randint
def fillrandom():
    m = [[[0 for i in range(7)]for j in range(9)]for k in range(4)]
    i = 0
    while i < 4:
        j = 0
        while j < 9:
            k = 0
            while k < 7:
                m[i][j][k] = randint(11,99)
                k += 1
            j += 1
        i += 1
    return m
def printstack():
    a = fillrandom()
    i = 3
    while i >=0:
        print(a[i])
        print()# only used to differentiate between each stack
        i = i - 1
printstack()
