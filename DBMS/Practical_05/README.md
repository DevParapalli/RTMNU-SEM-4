# Practical 05: Aggregate Functions

- Aim : Implementation of various aggregate functions in SQL.

- In SQL, MIN, MAX, AVG, and COUNT are aggregate functions used to perform calculations on a set of values in a column.

The syntax for these functions is as follows:

- MIN: returns the minimum value in a column

```sql

SELECT MIN(column_name) FROM table_name;
```

Example:

```sql

SELECT MIN(price) FROM products;
```

- MAX: returns the maximum value in a column

```sql

SELECT MAX(column_name) FROM table_name;
```

Example:

```sql

SELECT MAX(price) FROM products;
```

- AVG: returns the average value in a column

```sql

SELECT AVG(column_name) FROM table_name;
```

Example:

```sql

SELECT AVG(price) FROM products;
```

- COUNT: returns the number of rows in a column

```sql

SELECT COUNT(column_name) FROM table_name;
```

Example:

```sql

SELECT COUNT(*) FROM products;
```

Note that COUNT can also be used with the DISTINCT keyword to return the number of unique values in a column:

```sql

SELECT COUNT(DISTINCT column_name) FROM table_name;
```

Example:

```sql

SELECT COUNT(DISTINCT category) FROM products;
```
