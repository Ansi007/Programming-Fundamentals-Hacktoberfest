def capital(string,size):
    st_new = ""
    i = 0
    while i < size:
        if (ord(string[i]) >= ord("a")) and (ord(string[i]) <= ord("z")):
            cap = chr((ord(string[i])- ord("a"))+ ord("A"))
            st_new = st_new + cap
        else:
            st_new = st_new + string[i]
        i = i + 1
    return st_new
def main():
    s = str(input("enter any string"))
    N =int(input("enter size"))
    p = capital(s,N)
    print(p)
main()
