# CW-II Practical 04

Functions in Python are blocks of code that can be called multiple times with different arguments. They can take zero or more arguments and can return a value or not. Functions are defined using the def keyword, followed by the function name, arguments in parentheses, and a colon. The code block for the function is indented below the def statement. Functions can be called by their name followed by arguments in parentheses.

Functions can also have optional arguments, default values, and variable-length arguments. You can also pass functions as arguments to other functions, and functions can return other functions.

Here is an example of a function that takes two arguments and returns their sum:

```python
def add_numbers(a, b):
    return a + b
```



To call this function and use it, you can pass in values for `a` and `b`:

```bash
sum = add_numbers(2, 3)
print(sum) # output: 5
```

Classes are the blueprint for creating objects in object-oriented programming. A class can contain variables, methods, and other attributes that define the behavior and properties of its objects.

The `__init__`  method is a special method in Python that gets called when an object is created from a class. It is used to initialize the attributes of the object. The first argument of the `__init__`  method is usually self, which refers to the object being created. The `__init__`  method can take additional arguments to set the initial values of the object's attributes.

The `__str__`  method is another special method in Python that defines the string representation of an object. When an object is printed or converted to a string, the `__str__`  method is called. It returns a string that represents the object in a human-readable format.
