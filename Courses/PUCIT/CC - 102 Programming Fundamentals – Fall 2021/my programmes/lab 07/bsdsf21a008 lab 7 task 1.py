def vow_rang():
    a = ord("a")
    e = ord("e")
    i = ord("i")
    o = ord("o")
    u = ord("u")
    A = ord("A")
    E = ord("E")
    I = ord("I")
    O = ord("O")
    U = ord("U")
    vow = (a,e,i,o,u,A,E,I,O,U)
    return vow
def count_vowel(s):
    k = len(s)
    i = 0
    c = 0
    rang = (vow_rang())
    while i < k:
        if ord(s[i]) in (rang):
            c = c + 1
        i = i + 1
    return c
def main():
    b = input("enter any string  ")
    print(count_vowel(b))
main()

