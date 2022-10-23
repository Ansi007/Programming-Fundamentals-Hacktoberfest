import random

n = random.randint(1,100)
i = 1
print("You have to guess a number in 8 chances from 1 to 100")
while i <= 8:
    i = i + 1
    a = int(input("Enter "))
    if a > n:
        print("Enter smaller number")
    elif a < n:
        print("Enter greater number")
    elif a == n:
        print("Congratulations! You have guessed the number ")
        break

print("Number was",n)

print("You have used",i,"turns.")
