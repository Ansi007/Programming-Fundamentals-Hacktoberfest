def game(f, c, i, t):
    p = f / 100
    n = c / 20
    d = i / 10
    q = t / 4
    sum = round((p + n + d + q),0)
    if sum == 1:
        print("Congratulations! You have won the game.")
    elif sum >= 1:
        print("Sorry! Your answer  is greater than 1$")
    else:
        print("Sorry! Your answer  is smaller than 1$")
    return 0
    

def main():
    print("'You have to enter the number of coins required to make exactly one dollar'")
    print("For your help:")
    print("1$ = 100 pennies")
    print("1$ = 20  nickels")
    print("1$ = 10  dimes")
    print("1$ = 04  quarters")
    t = float(input("enter the number of quarters: "))
    i = float(input("enter the number of dimes: "))
    f = float(input("enter the number of nickels: "))
    c = float(input("enter the number of pennies: "))
    game(f, c, i, t)


main()
