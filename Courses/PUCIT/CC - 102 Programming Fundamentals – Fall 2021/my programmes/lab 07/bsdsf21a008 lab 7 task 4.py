def capitalize(k):
    if (ord(k) >= ord("a")) and (ord(k) <= ord("z")):
        cap = chr((ord(k) - ord("a"))+ ord("A"))
        return cap
    else:
        return k
def decap(k):
    if (ord(k) >= ord("A")) and (ord(k) <= ord("Z")):
        cap = chr((ord(k) - ord("A"))+ ord("a"))
        return cap
    else:
        return k
def properCase(s,N):
    st_new = ""
    i = 0
    while i < N :
        if (s[i] == (" ")):
            i = i + 1
            st_new = st_new +" " + capitalize(s[i])
        elif (s[i] ==(".")):
            i = i + 1
            st_new = st_new +"." + capitalize(s[i])
        else:
            st_new = st_new + decap(s[i])
        i = i + 1
    return st_new
def main():
    x = input("enter any string to convert into proper case ")
    m = len(x)
    print(properCase(x,m))
main()







