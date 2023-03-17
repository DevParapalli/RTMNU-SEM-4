# 9.	Write a python function to multiply all the numbers in the list

from functools import reduce


LIST = [1, 2, 3, 4, 5]

if __name__ == "__main__":
    print(reduce(lambda x, y: x * y, LIST))

""" 
120
"""
