print("welcome to game of guessing how many pennies and nickels and dimes and quater it takes to make a dollar")
def gam(a , b , c , d):
    pen = a * (0.1)
    nick = b * (0.05)
    dim = c * (0.1)
    qat = d * (0.25)
    tot = (pen + nick + dim + qat)
    if(tot == 1):
        print("you won the game")
    elif(tot > 1):
        print("the ammount is greater than 1 dollar")
    elif(tot < 1):
        print("the ammount is less than a dollar")
    return None
def main():
    print("enter how many ammount of each of the foloowing will take to sum up to 1 dollar")
    x = int(input("enter number of pennies"))
    y = int(input("enter number of nickels"))
    z = int(input("enter number of dimes"))
    q = int(input("enter number of quaters"))
    gam(x , y , z , q )
main()
