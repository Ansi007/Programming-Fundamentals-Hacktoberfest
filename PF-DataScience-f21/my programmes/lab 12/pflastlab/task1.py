from random import randint
def createNLists(fname):
    k = str(fname)+".txt"
    a = randint(1,100)
    fl = open(k,"w")
    fl.write(str(a)+"\n")
    for i in range(a):
        b = randint(1,10)
        fl.write(str(b)+" ")
        for k in range(b):
            s = randint(1,10)
            fl.write(str(s)+",")
        fl.write("\n")
    fl.close()
def main():
    a = int(input("how many files you want to generate: "))
    for i in range(a):
        k = str(input("enter file name : "))
        createNLists(k)
main()

