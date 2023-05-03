# CW-II Practical 05

`int` is a built-in Python function that is used to convert a given value to an integer data type. For example, if you have a string variable containing the value "10", you can use the `int` function to convert it to an integer value: `int("10")`. The `int` function can also be used to convert floating-point numbers to integers by truncating the decimal portion of the number.

`input` is a built-in Python function that is used to read input from the user. When you call the `input` function, it displays a prompt to the user and waits for the user to enter a value. Once the user enters a value and presses the "Enter" key, the `input` function returns the entered value as a string. You can then use the `int` function to convert the input string to an integer, if necessary.

Here's an example of using `input` to read a number from the user and store it in an integer variable:

```python
number_str = input("Enter a number: ")
number = int(number_str)
```

`random.shuffle` is a function from the `random` module in Python that shuffles the elements of a list in place. When you call `random.shuffle` on a list, the order of the elements in the list is randomized.

Here's an example of using `random.shuffle` to shuffle the elements of a list:

```python
import random

my_list = [1, 2, 3, 4, 5]
random.shuffle(my_list)
print(my_list) # Output: [2, 4, 1, 5, 3]
```

In this example, the `random.shuffle` function is used to shuffle the elements of the `my_list` variable, and then the shuffled list is printed to the console.
