# DSPD Practical 05

A postfix expression, also known as a reverse Polish notation, is a mathematical notation in which the operators are written after their operands. For example, the infix expression "3 + 4" is written as "3 4 +" in postfix notation.

To solve a postfix expression, you can use a stack data structure. Here's how it works:

1.Start by reading the expression from left to right.
2.If you encounter a number, push it onto the stack.
3.If you encounter an operator, pop the top two elements from the stack, apply the operator to them, and push the result back onto the stack.
4.Continue reading the expression until there are no more tokens left.
5.The final result will be the only element remaining on the stack.
