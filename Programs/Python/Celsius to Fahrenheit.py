#Celsius to Fahrenheit
def TempConvt(x):
    F = (9/5)*x + 32
    return F


def main():
    C = int(input("Enter temperature in Celsius: "))
    print(C,"°C =",TempConvt(C),"°F")


main()