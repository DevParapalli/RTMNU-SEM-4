# CW-II Practical 02

In Python, `string.split()` and `string.lower()` are two built-in methods for manipulating strings.

`string.split()` is a method that is used to split a string into a list of substrings based on a specified separator. By default, the separator is a whitespace character, such as a space, tab, or newline. You can also specify a custom separator using a string as an argument to `split()`. For example:

```python

sentence = "This is a sentence."
words = sentence.split()  # Default separator is whitespace
print(words)  # Output: ['This', 'is', 'a', 'sentence.']

csv_line = "apple,banana,orange,pear"
csv_values = csv_line.split(",")  # Separator is a comma
print(csv_values)  # Output: ['apple', 'banana', 'orange', 'pear']
```

`string.lower()` is a method that is used to convert all characters in a string to lowercase. This can be useful for case-insensitive comparisons or for cleaning up user input. For example:

```arduino

word = "PYTHON"
lower_word = word.lower()
print(lower_word)  # Output: 'python'
```

Both `split()` and `lower()` return a new string or list and do not modify the original string. These methods are commonly used in combination with other string methods and control structures to manipulate and analyze text data.
