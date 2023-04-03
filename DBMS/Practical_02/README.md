# DBMS Practical 02

- Aim : Implementation of DDL and DML Commands in SQL.

## Theory

DDL (Data Definition Language) and DML (Data Manipulation Language) are two categories of SQL (Structured Query Language) commands used to create, modify, and manipulate the structure and data of relational databases.

The UPDATE command is a DML command that modifies existing data in a table. The syntax for the UPDATE command is as follows:

```sql
UPDATE table_name
SET column_name = new_value
WHERE condition;
```

Here, `table_name` is the name of the table to be updated, `column_name` is the name of the column to be updated, `new_value` is the new value to be set, and `condition` is an optional clause that specifies which rows to update.

The SET keyword specifies the new value to be set for the specified column, while the WHERE clause is used to filter the rows that need to be updated.

The IN keyword is often used in conjunction with the WHERE clause to specify a list of values to match against a column. For example, the following query updates the 'status' column to 'closed' for all rows where the 'id' column is in the list of IDs:

```sql
UPDATE table_name
SET status = 'closed'
WHERE id IN (1, 2, 3);
```

The DELETE FROM command is another DML command that is used to delete one or more rows from a table. The syntax for the DELETE FROM command is as follows:

```sql
DELETE FROM table_name
WHERE condition;
```

Here, `table_name` is the name of the table from which rows need to be deleted, and `condition` is an optional clause that specifies which rows to delete.

The EXISTS keyword is used in SQL to test for the existence of a subquery. The subquery is a SELECT statement that returns a set of rows, and the EXISTS keyword is used to check if any rows are returned by the subquery. The syntax for the EXISTS keyword is as follows:

```sql
SELECT column_name(s)
FROM table_name
WHERE EXISTS (subquery);
```

Here, `column_name(s)` is the name(s) of the column(s) to be selected, `table_name` is the name of the table from which to select, and `subquery` is the SELECT statement that returns a set of rows.

The EXISTS keyword returns true if the subquery returns at least one row, and false otherwise. The subquery is evaluated first, and if it returns any rows, the outer query returns the specified columns. If the subquery does not return any rows, the outer query does not return any results.

The EXISTS keyword is often used in conjunction with the NOT keyword to test for the absence of a subquery. For example, the following query returns all the orders that do not have any associated payments:

```sql
SELECT *
FROM orders
WHERE NOT EXISTS (
  SELECT *
  FROM payments
  WHERE payments.order_id = orders.id
);
```
