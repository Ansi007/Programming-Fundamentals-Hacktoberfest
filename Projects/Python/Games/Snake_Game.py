import random as r

def dice_roll():
    count = 0
    terminate = 0
    end_game = 0
    while True:
        if count > 0:
            if terminate > 0:
                end_game = int(input("If you are not intrested to resume this game then you type 1 else any number press: "))
            if end_game == 1:
                return False
            print("Now you are ready for throw dice")
            opt = input("Yes or No: ")
            if opt == "Yes" or opt == "YES" or opt == "yes" or opt == "y":
                roll = r.randint(1,6)
                return roll
            else:
                terminate +=1
        else:
            print("You are ready for throw dice")
            opt = input("Yes or No: ")
            if opt == "Yes" or opt == "yes" or opt == "y":
                roll = r.randint(1,6)
                return roll
        count +=1

def leddar(num):
    dict1 = {4:16,23:45,53:75,78:97}
    return check_leddar(dict1,num)

def check_leddar(dict1,num):
    for key in dict1:
        if num == key:
            num = dict1[key]
            print(f"waoo!you have reached ladder and now you are able to climb up to reached cell number {num}")
    return num


def snake(num):
    dict2 = {24:3,47:12,77:14,98:80}
    return check_snake(dict2,num)

def check_snake(dict2,num):
    for key in dict2:
        if num == key:
            num = dict2[key]
            print(f"opps!snake has already exist on this number,so you have to go cell number {num}")
    return num

def main():
    num = 0
    while num != 100:
        roll = dice_roll()
        if roll == False:
            print("Your game is finished")
            break
        num += roll
        if num > 100:
            num -= roll
            print(f"Dice has value {roll},so again throw")
        elif num == 100:
            print(f"Dice has value {roll},piece moved to cell {num}\nCongratulations You are win")
        else:
            print(f"Dice has value {roll},piece moved to cell {num}")
        
        num = leddar(num)
        num = snake(num)
        
main()