def temp(c):
    a = 9/5
    f = (a*c)+32
    return f
def main():
    i = float(input("enter the temperature in celcius"))
    a = temp(i)
    print("the temperature in fahrenheit is =" , a)
main()

