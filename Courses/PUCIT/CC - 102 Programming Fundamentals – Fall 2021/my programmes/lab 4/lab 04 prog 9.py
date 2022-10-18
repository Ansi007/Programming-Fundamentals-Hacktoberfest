def ser(x):
    count = 0
    prod = 1
    s = 0
    while(x > -1):
        s = s + x
        count = count + 1
        prod = prod * x
        x = int(input())
        print(x)
    avg = s / count
    print("the sum of series is", s)
    print("the count of series is" , count)
    print("the product of series is", prod)
    print("the average of series is", avg)
    return None
def main():
    print("enter a positive number to continue the series and and negative to stop")
    m = int(input("enter the first value of series"))
    print(m)
    ser(m)

main()

