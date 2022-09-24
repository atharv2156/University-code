import random
firstnum = int(input("enter first no of range: "))
lastnum = int(input("enter last no of range: "))
Randnumber = random.randint(firstnum, lastnum)
no_of_attempts = int(input("No of attempts you want: "))
count = 0
while count < no_of_attempts:
    gussedNO = int(input("Guess a number: "))
    count += 1
    if gussedNO > Randnumber:
        print("Try Again! You guessed too high")
    elif gussedNO < Randnumber:
        print("Try Again! You guessed too low")
    else:
        print("You Guessed correct number")
        break
if gussedNO == Randnumber:
    print('You guessed the number in ' + str(count) + ' tries!')
else:
    print('You did not guess the number, The number was ' + str(gussedNO))
