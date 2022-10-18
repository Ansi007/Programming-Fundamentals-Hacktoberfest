def noTabs(s):
    k = len(s)
    i = 0
    c = ""
    while i < k:
        if (repr(s[i]) == "\t") or s[i] == "\t" :
            c = c + "   "
        else:
            c = c + s[i]
        i = i + 1
    return c
def main():
    stri = input("enter any string with tabs")
    nt_str = noTabs(stri)
    print(nt_str)
main()
