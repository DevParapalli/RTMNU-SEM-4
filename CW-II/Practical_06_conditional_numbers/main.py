# 6.	Write a program that returns the lesser of two given numbers if both numbers are even, but returns the greater if one or both numbers are odd.


if __name__ == "__main__":
    x,  y = int(input("Enter x: ")), int(input("Enter y: "))
    if x % 2 == 0 and y % 2 == 0:
        print(min(x, y))
    else:
        print(max(x, y))