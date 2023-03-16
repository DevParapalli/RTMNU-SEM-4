# 5.	Write a program to mimic the carnival game ‘Three Cup Montee’.
from random import shuffle



if __name__ == "__main__": 
    
    cups = ["Ball", "Empty", "Empty"]
    print(f"Inital cups: {cups}")
    shuffle(cups)
    print(f"Cups have been shuffled")
    user_guess = int(input("Guess where the ball is (1, 2, or 3): "))
    if cups[user_guess - 1] == "Ball":
        print("You win!")
    else:
        print("You lose!")
        print(f"Final cups: {cups}")