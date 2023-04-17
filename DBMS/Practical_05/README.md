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

- In SQL, the GROUP BY clause is used with aggregate functions to group the data based on one or more columns, and then perform calculations such as MIN, MAX, AVG, or COUNT on each group separately.

Note that you can group by multiple columns by including them in the GROUP BY clause, separated by commas.

Example:

```sql

SELECT category, supplier, AVG(price) FROM products GROUP BY category, supplier;
```

Also, note that if you want to filter the groups based on some condition, you can use the HAVING clause after the GROUP BY clause. The HAVING clause is similar to the WHERE clause, but it filters groups instead of individual rows.

Example:

```sql

SELECT category, COUNT(*) FROM products GROUP BY category HAVING COUNT(*) > 5;
```