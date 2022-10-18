def isNumber(s):
    size = len(s)
    st_new = ""
    i = 0
    while i < size:
        if (ord(s[i]) >= ord("0")) and (ord(s[i]) <= ord("9")):
            pass
        else:
            return False
        i = i + 1
    return True
def main():
    m = input("enter any string with digits only ")
    k = isNumber(m)
    if k:
        print("the string is composed of digits only")
    else:
        print("wrong input")
main()

