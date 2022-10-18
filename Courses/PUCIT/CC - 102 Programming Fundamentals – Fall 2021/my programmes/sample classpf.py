def pintty(h,c):
    i = 1
    while i<=h :
        print(pintline(c,i))
        i = i + 1
def pintline(c,i):
    l = int(c)
    s =""
    while l <= i:
        s = s + str(l)
        l = l + 1
    return s

def main():
    h = 7
    c = 1
    pintty(h,c)
main()
