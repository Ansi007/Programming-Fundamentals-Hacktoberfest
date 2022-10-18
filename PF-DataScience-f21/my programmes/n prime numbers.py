def prim(x):
    i = 2
    if x > 1:
        for i  in range(2,x):
            if x % i == 0:
                return False
        else:
            return True

def main():
    s = int(input("enter how many prime numbers you want to print"))
    i = 1
    c = 1
    while c <= s:
        if prim(i):
            print(i)
            c = c + 1
        i = i + 1
    return None
main()
