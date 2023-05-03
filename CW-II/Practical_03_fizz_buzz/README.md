# CW-II Practical 03

The `range()` function in Python is used to generate a sequence of numbers. It returns a sequence of numbers starting from the given start value and ending at the given stop value, incremented by the given step value. The function can be called with one, two or three arguments, where the first argument is the start value, the second argument is the stop value, and the third argument is the step value. The `range()` function returns a range object which can be converted to a list, or iterated over using a loop. Here's an example:

```python
# Create a sequence of numbers from 1 to 10
for i in range(1, 11):
    print(i)
```

The modulo operator `%` in Python is used to find the remainder of the division of two numbers. It returns the remainder of dividing the left operand by the right operand. For example, `7 % 3` returns `1` because the remainder of dividing `7` by `3` is `1`. The modulo operator is often used to check if a number is even or odd, or to check if a number is divisible by another number without a remainder

In Python, a string can be used as a boolean value in conditional statements. An empty string `""` is considered `False`, while any non-empty string is considered `True`. This allows for easy checking if a string is empty or not. Here's an example:

```python
# Check if a string is empty
s = ""
if not s:
    print("The string is empty")
else:
    print("The string is not empty")
```

Output:

```text
The string is empty
```

In this example, the `if not s:` condition checks if the string `s` is empty. Since the string is empty, the condition evaluates to `True`, and the program prints "The string is empty".
