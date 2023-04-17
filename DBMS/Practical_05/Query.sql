-- Query 1: Display the name of the employee who has the highest salary.
SELECT ec.ename
FROM Emp_Company AS ec
WHERE ec.salary = (
        SELECT max(ec1.salary)
        FROM Emp_Company AS ec1
    );

-- Query 2: List the name of employee having maximum salary in their company.
SELECT ec.ename
FROM Emp_Company AS ec
WHERE ec.salary = (
        SELECT max(ec1.salary)
        FROM Emp_Company AS ec1
        WHERE ec1.cname = ec.cname
    );

-- Query 3: Find average salary of all company except "ACC"
SELECT cname,
    avg(ec.salary)
FROM Emp_Company AS ec
WHERE ec.cname != 'ACC'
GROUP BY ec.cname;

-- Query 4: Find the average salary of company only for those employees living in Delhi.city
SELECT ec.cname,
    avg(ec.salary)
FROM Emp_Company AS ec
WHERE ec.ename IN (
        SELECT ename
        FROM Employee
        WHERE city = "DELHI"
    );

-- Query 5: Find the name of company having highest average salary.
SELECT ec.cname,
    ec.salary
FROM Emp_Company AS ec
WHERE ec.cname = (
        SELECT cname
        FROM Emp_Company
        WHERE salary = (
                SELECT max(salary)
                FROM Emp_Company
            )
    );

-- Query 6: List the number of employee living in bombay
SELECT COUNT()
FROM Employee
WHERE city = "BOMBAY";

-- Query 7: List the name of employee with his living city, having maximum salary in company TATA.
SELECT e.ename,
    e.city
FROM Employee AS e
WHERE e.ename = (
        SELECT ec.ename
        FROM Emp_Company AS ec
        WHERE ec.cname = "TATA"
            AND ec.salary = (
                SELECT max(salary)
                FROM Emp_Company
                WHERE cname = "TATA"
            )
    );