# CW-II Practical 07

In Python, `isalnum()` and `islower()` are string methods that are used to check if a string meets certain criteria.

The `isalnum()` method checks if all the characters in a string are alphanumeric. In other words, it checks if the string contains only letters (both uppercase and lowercase) and digits (0-9). If the string contains any other character, such as whitespace or punctuation marks, `isalnum()` will return `False`.

Here's an example:

```python
string1 = "hello123"
string2 = "hello world"

print(string1.isalnum())  # Output: True
print(string2.isalnum())  # Output: False
```



The `islower()` method, on the other hand, checks if all the alphabetic characters in a string are lowercase. If the string contains any uppercase characters, digits, whitespace, or punctuation marks, `islower()` will return `False`.

Here's an example:

```python
string1 = "hello"
string2 = "Hello"
string3 = "hello123"

print(string1.islower())  # Output: True
print(string2.islower())  # Output: False
print(string3.islower())  # Output: True
```



In summary, `isalnum()` checks if a string contains only alphanumeric characters, while `islower()` checks if a string contains only lowercase alphabetic characters.
