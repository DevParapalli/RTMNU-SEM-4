--Query 1
SELECT e.ename,
    e.city
FROM Employee AS e
WHERE e.ename IN (
        SELECT ec.ename
        FROM Emp_Company AS ec
        WHERE ec.cname = "ACC"
    );

--Query 2
SELECT e.ename
FROM Employee AS e
WHERE e.city = "BOMBAY"
    AND e.ename IN (
        SELECT ec.ename
        FROM Emp_Company AS ec
        WHERE ec.cname IN (
                SELECT c.cname
                FROM Company AS c
                WHERE c.city = "DELHI"
            )
    );

--Query 3
SELECT e2.ename
FROM employee AS e2
WHERE EXISTS (
        SELECT e1.city
        FROM Employee AS e1
        WHERE e1.ename = "Sunil"
            AND e2.city = e1.city
    );

--Query 4
SELECT ec.salary
FROM Emp_Company AS ec
WHERE EXISTS (
        SELECT e.ename
        FROM Employee AS e
        WHERE e.city = "DELHI"
            AND e.ename = ec.ename
    );

--Query 5
SELECT c.cname
FROM Company AS c
WHERE EXISTS (
        SELECT c1.city
        FROM Company AS c1
        WHERE c1.city = c.city
            AND c1.cname = "TATA"
    );