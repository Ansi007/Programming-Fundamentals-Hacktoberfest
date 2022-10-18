f = open("01.txt", 'rb')
text = f.read()
for s in text:
    print("[", end="")
    print(s, end="")
    print("]")
#012ABCabc
