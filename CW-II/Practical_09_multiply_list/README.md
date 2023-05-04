# CW-II Practical 09

`functools.reduce` is a Python function from the `functools` module that applies a function to a sequence of elements and returns a single result. The basic syntax of `functools.reduce` is as follows:

```python
functools.reduce(function, sequence[, initial])
```

where:

- `function` is the function to be applied to the elements of the sequence
- `sequence` is the sequence of elements to be processed
- `initial` (optional) is the initial value to be used as the first argument to the function

The `reduce` function repeatedly applies the specified function to the elements of the sequence until a single result is obtained. Each step of the reduction process combines the current result with the next element of the sequence using the specified function. The resulting value is then used as the current result for the next step.

A lambda function is an anonymous function in Python that can take any number of arguments and return a single value. The basic syntax of a lambda function is as follows:

```python
lambda arguments: expression
```

where:

- `arguments` is a comma-separated list of arguments to the function
- `expression` is a single expression that is evaluated and returned as the result of the function
