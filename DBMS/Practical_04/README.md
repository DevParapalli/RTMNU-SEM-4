# Practical 04

In SQL, UNION, INTERSECT, and EXCEPT are set operators that can be used to combine or manipulate the results of queries. Here's a brief explanation of each:

- 1. UNION: UNION is used to combine the results of two or more SELECT statements into a single result set.The columns in the two SELECT statements must have the same data type and number of columns. The UNION operator removes duplicates from the result set by default, but you can use UNION ALL to keep all rows, including duplicates. The syntax is as follows:

```sql
SELECT column1, column2, ...
FROM table1
UNION
SELECT column1, column2, ...
FROM table2;
```

Example:

```sql
SELECT name, age, city
FROM customers
UNION
SELECT name, age, city
FROM employees;
```

INTERSECT: INTERSECT is used to return the common rows between two SELECT statements. The columns in the two SELECT statements must have the same data type and number of columns. The syntax is as follows:

```sql
SELECT column1, column2, ...
FROM table1
INTERSECT
SELECT column1, column2, ...
FROM table2;
```

Example:

```sql
SELECT name, age, city
FROM customers
INTERSECT
SELECT name, age, city
FROM employees;
```

EXCEPT: EXCEPT is used to return the rows that are in the first SELECT statement but not in the second SELECT statement.The columns in the two SELECT statements must have the same data type and number of columns. The syntax is as follows:

```sql
SELECT column1, column2, ...
FROM table1
EXCEPT
SELECT column1, column2, ...
FROM table2;
```

Example:

```sql
SELECT name, age, city
FROM customers
EXCEPT
SELECT name, age, city
FROM employees;
```
