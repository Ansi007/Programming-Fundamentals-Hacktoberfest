#Converting Square feet to Acers
def SqrFeet_Acers(sq):
    a = sq / 43560
    return a


def main():
    sq = int(input("Enter number of square feet: "))
    print(SqrFeet_Acers(sq))


main()
