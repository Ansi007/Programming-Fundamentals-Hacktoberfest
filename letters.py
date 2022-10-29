def seperate(x):

    a=len(x)
    i=0
    while i<a:
        if ord(x[i]) >= ord("A") and ord(x[i]) <= ord("z") :
            print(x[i])
        i=i+1

def main():

    string="My fAv Fruit Is Mango"
    x=seperate(string)
main()
