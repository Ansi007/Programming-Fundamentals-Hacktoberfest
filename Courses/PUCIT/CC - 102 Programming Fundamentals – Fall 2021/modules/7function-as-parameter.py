def humpty(d):
    print("I was once sitting on a wall,", d)
    return

def ranjha(v):
    print("nee:", v)
    return

def runafunction(f, p):
    f(p)

choice = int(input("Enter 1 for humpty, 2 for ranjha: "))
nam = input("Enter a name: ")
fn = humpty if choice == 1 else ranjha
runafunction(fn, nam)