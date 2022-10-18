def temp(c):
    a = 9/5
    f = (a*c)+32
    return f
def main():
    a = 0
    k = 1
    while(a <= 100):
        k = temp(a)
        print(k)
        a = a + 1
main()
