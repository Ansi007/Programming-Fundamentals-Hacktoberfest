import random
import random as r

choices = [1, 2, 3]
score_human = 0
score_computer = 0
print("Rock, Paper, Scissors Game")
print("=============================")
print("You are playing against computer. Enter corresponding "
      "numbers of your choice")
print("Rock = 1")
print("Paper = 2")
print("Scissors = 3")
print("There will be 10 turns.")
print("=============================")
print()
print("Enter the number to start")
for i in range(10):
    print(i + 1, end=':  ')
    c = random.choice(choices)  # Computer's choice
    h = int(input())  # Human's choice
    b = 'Rock'
    a = 'Rock'
    if h == 2:
        b = "Paper"
    elif h == 3:
        b = "Scissors"

    a = 'Rock'
    if c == 2:
        a = "Paper"
    elif c == 3:
        a = "Scissors"
    print("Your choice ({})   ;   Computer's choice ({})".format(b, a))
    if 1 < h > 3:
        print("Invalid value!")
    # from 1, 2 --> 2 is winner
    # from 1, 3 --> 1 is winner
    # from 2, 3 --> 3 is winner
    if h == 1 and c == 2:
        score_computer += 1
    elif h == 1 and c == 3:
        score_human += 1
    elif h == 2 and c == 1:
        score_human += 1
    elif h == 2 and c == 3:
        score_computer += 1
    elif h == 3 and c == 1:
        score_computer += 1
    elif h == 3 and c == 2:
        score_human += 1
    # else:
    #     score_human += 1
    #     score_computer += 1
print()
if score_computer > score_human:
    print('You lost!')
elif score_human > score_computer:
    print('You Won!')
else:
    print('Tied')

print("Your Score =",score_human)
print("Computer's Score =",score_computer)
a = input()
