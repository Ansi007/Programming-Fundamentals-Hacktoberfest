# Write your code here :-)
def chalbill(x):
    tip = x*(0.15)
    print("the tip will be =" , tip)
    sl_tax = x*(0.7)
    print("the tax will be =" , sl_tax)
    total = (tip + sl_tax + x)
    return total
def main():
    a = float(input("enter the  charge of food items "))
    m = chalbill(a)
    print("the total bill will be = " , m)
main()
