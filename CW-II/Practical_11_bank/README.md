# CW-II Practical 11

Classes in Python are a blueprint for creating objects with a set of attributes and methods. They allow you to encapsulate data and functionality into a single unit, making code more modular and reusable.

The `__init__` method is a special method that is called when an object of the class is created. It is used to initialize the attributes of the object.

The `__str__` method is another special method that is used to define a string representation of the object. It is called when the `print` function is used on an instance of the class.

```python
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def say_hello(self):
        print(f"Hello, my name is {self.name} and I'm {self.age} years old.")

    def __str__(self):
        return f"Person(name={self.name}, age={self.age})"
```

Now, when we create an instance of the `Person` class and print it, we will get a string representation of the object that includes the values of its attributes:

```python
p = Person("Alice", 30)
print(p)  # Person(name=Alice, age=30)
```

Exceptions are used in Python to handle errors and other exceptional conditions that may arise during program execution. When an error occurs, Python raises an exception, which can be caught and handled by the program.
