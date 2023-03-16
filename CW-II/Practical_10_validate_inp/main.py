# 10.	Write a program for validating the user input 

SECRET = "password"
PIN = 2345


if __name__ == "__main__":
    inp = input("Enter the password: ")
    if inp == SECRET:
        print("Correct password")
        pin = int(input("Enter the pin: "))
        if pin == PIN:
            print("Correct pin")
        else:
            print("Incorrect pin")
    else:
        print("Incorrect password")