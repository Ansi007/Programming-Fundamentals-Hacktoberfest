# Finding Factorial of a number
def Factorial():
    num = int (input("Enter a positive number: "))
    i = 0
    fact = 1
    while num - i >= 1:
        fact = fact * (num - i)
        i = i + 1
    return fact , num


def main():
    f , n = Factorial() 
    print(n,end="")
    print("! =",f )


main()