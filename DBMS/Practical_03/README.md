# DBMS Practical 03

- Aim : Implementation of IN clause and EXISTS clause in SQL.

## Theory

IN and EXISTS are two operators used in SQL to filter data based on certain conditions.

The IN operator is used to filter data based on a specific list of values. It checks if a certain value matches any value in the specified list. For example, the following SQL query will return all customers whose country is either 'USA' or 'Canada':

```sql
SELECT * FROM customers
WHERE country IN ('USA', 'Canada');
```

The EXISTS operator is used to check if a subquery returns any rows. It is typically used in conjunction with a correlated subquery, which is a subquery that refers to a table from the outer query. The EXISTS operator returns true if the subquery returns at least one row, and false otherwise. For example, the following SQL query will return all orders where the customer has a shipping address in the same city as the billing address:

```sql
SELECT * FROM orders o
WHERE EXISTS (
  SELECT * FROM customers c
  WHERE o.customer_id = c.customer_id
  AND o.shipping_city = c.billing_city
);
```

In this example, the subquery returns all customers whose billing city matches the shipping city of the current order in the outer query. If at least one row is returned by the subquery, the EXISTS operator returns true, and the current order is included in the result set.
