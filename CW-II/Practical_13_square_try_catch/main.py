# 13.	Write a function that asks for an integer and prints square of it. Use a while loop with a try, except, else block to account for incorrect inputs.

if __name__ == "__main__":
    while True:
        try:
            inp = int(input("Enter an integer: "))
        except ValueError:
            print("Invalid input")
        else:
            print(f"Square of {inp} is {inp ** 2}")
            break