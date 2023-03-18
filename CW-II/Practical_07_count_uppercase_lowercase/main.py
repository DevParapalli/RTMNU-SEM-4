# 7.	Write a python function that accepts a string and calculate the number of upper case letters and lower case letters.

def count_upper_lower(string):
    count = [0, 0]  # lower, upper
    for char in string:
        if char.isalnum():
            if char.islower():
                count[0] += 1
            else:
                count[1] += 1
    return count

if __name__ == "__main__":
    inp = input("Enter a string: ")
    count = count_upper_lower(inp)
    print(f"Lower case: {count[0]}, Upper case: {count[1]}")

"""
Enter a string: Dev Parapalli
Lower case: 10, Upper case: 2
"""
