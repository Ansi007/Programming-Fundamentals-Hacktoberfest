from random import randint
f = open("xyz.pgm", "w")
f.write("P2\n")
f.write("100 200\n")
f.write("255\n")
data = []
for i in range(100*200):
    c = 0
    c = randint(0,255)
    data.append(c)
x = 0
for j in range(100*200):
    f.write(str(data[j]))
    x = x + 1
    if x%15 == 0:
        f.write("\n")
    else:
        f.write(" ")
f.close


