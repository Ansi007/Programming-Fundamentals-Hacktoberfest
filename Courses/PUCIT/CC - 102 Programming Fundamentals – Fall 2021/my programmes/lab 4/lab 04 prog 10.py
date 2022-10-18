def fact(x):
    if(x <= 0):
        print("factorial does not exsist")
    elif(x == 1):
        print("the factorial is 1")
    elif(x > 1):
        f = 1
        while(x > 1):
            f = f * x
            x = x - 1
    return f
def main():
    a = int(input("enter the number to find its factorial"))
    facto = fact(a)
    print("the factorial of given number is", facto)
main()
