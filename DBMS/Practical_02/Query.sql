-- Query 1
UPDATE Emp_Company
SET salary = salary + 100
WHERE ename = "Vijay" -- Check if vijay lives in madras
    AND ename IN (
        SELECT ename
        FROM Employee
        WHERE city = "Madras"
    ) -- Check if Sunil lives in madras
    AND EXISTS (
        SELECT *
        FROM Employee
        WHERE ename = "Sunil"
            AND city = "Madras"
    );

SELECT *
FROM Emp_Company;

-- Query 2
UPDATE Emp_Company
SET cname = "TATA"
WHERE salary > 8000
    AND cname = "ACC";

SELECT *
FROM Emp_Company;

-- Query 3
UPDATE Emp_Company
SET salary = salary + 100
WHERE ename = "Vijay";

UPDATE Emp_Company
SET salary = salary - 100
WHERE ename = "Sunil";

SELECT *
FROM Emp_Company;

-- Query 4
DELETE FROM Emp_Company
WHERE salary > 8000;

SELECT *
FROM Emp_Company;