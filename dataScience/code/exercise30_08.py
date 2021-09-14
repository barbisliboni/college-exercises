# User writes a number from 0 to 10 trying to guess if its 'right' or not
from random import randint

random_number = randint(0,10)
last_guess = 3

while(last_guess  > 0):
    guess = int(input("What is your guess? A number from 0 to 10 \n"))

    if(random_number == guess):
        print("You got it!")
        break
    else:
        print("You missed! Try again")
        last_guess -= 1

else:
    print("You lost all your chances! Try again")





