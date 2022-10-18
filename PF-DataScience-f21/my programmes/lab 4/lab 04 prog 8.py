def ser(x):
    while(x > -1):
        x = int(input())
        print(x)
    return None
def main():
    print("enter a positive number to continue the series and and negative to stop")
    m = int(input("enter the first value of series"))
    print(m)
    ser(m)

main()


