# the inventory of products
class items_price:
    pastry = 80
    cream_roll = 70
    chicken_petty = 50
    cake_rusk = 25
    french_fries = 100
# the functionality for enumerators
def priceCal(n):
    tot = 0
    if "pastry" in n:
        m = int(input("enter the number of pasteries that you have purchased"))
        k = items_price.pastry
        f1 = m*k
        tot = tot + f1
    if "cream roll" in n:
        m = int(input("enter the number of cream_rolls that you have purchased"))
        k = items_price.cream_roll
        f2 = m*k
        tot = tot + f2
    if "chicken petty" in n:
        m = int(input("enter the number of chicken petties that you have purchased"))
        k = items_price.chicken_petty
        f3 = m*k
        tot = tot + f3
    if "cake rusk" in n:
        m = int(input("enter the number of cake rusks that you have purchased"))
        k = items_price.cake_rusk
        f4 = m*k
        tot = tot + f4
    if "french fries" in n:
        m = int(input("enter number of plates french fries that you have purchased"))
        k = items_price.french_fries
        f5 = m*k
        tot = tot + f5
    return tot
def main():
    n = int(input("enter how many items from menu have you slected to purchase"))
    if n <= 5:
        a = [0]*n
        i = 0
        while i < (n):
            a[i] = input("enter the names of item you have purchased   ")
            i = i + 1
        print("your total bill is",priceCal(a),"rupees")
    else:
        print("invlaid input")
    return None
main()





