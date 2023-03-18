# 9.	Write a python function to multiply all the numbers in the list

from functools import reduce


LIST = [1, 2, 3, 4, 5]

def multiply_list(list):
    return reduce(lambda x, y: x * y, list)

if __name__ == "__main__":
    print(multiply_list(LIST))

""" 
120
"""
