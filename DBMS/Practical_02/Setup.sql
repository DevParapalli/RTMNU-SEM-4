DROP TABLE IF EXISTS Employee;
DROP TABLE IF EXISTS Emp_Company;
DROP TABLE IF EXISTS Company;
DROP TABLE IF EXISTS Manager;
DROP TABLE IF EXISTS Emp_Shift;

CREATE TABLE Employee (ename varchar2(10), city varchar2(10));
CREATE TABLE Emp_Company (
    ename varchar2(10),
    cname varchar2(11),
    salary number(7, 2),
    jdate date
);
CREATE TABLE Company (cname varchar2(10), city varchar2(10));
CREATE TABLE Manager (ename varchar2(10), mname varchar2(10));
CREATE TABLE Emp_Shift (ename varchar2(10), shift varchar2(1));

INSERT INTO Employee
VALUES ('Devansh', 'Mumbai'),
    ('Sunil', 'Madras'),
    ('Sakshi', 'Pune'),
    ('Vijay', 'Madras');

INSERT INTO Emp_Company
VALUES ('Devansh', 'Microsoft', 100000, '01-JAN-2026'),
    ('Sunil', 'ACC', 10000, '01-JAN-2026'),
    ('Sakshi', 'Persistent', 10000, '01-JAN-2026'),
    ('Vijay', 'ACC', 6000, '01-JAN-2026');

INSERT INTO Company
VALUES ('Microsoft', 'Mumbai'),
    ('ACC', 'Madras'),
    ('Persistent', 'Pune'),
    ('TATA', 'Mumbai');

INSERT INTO Manager
VALUES ('Devansh', 'Anant'),
    ('Sunil', 'Parth'),
    ('Sakshi', 'Ashish'),
    ('Vijay', 'Sunil');

INSERT INTO Emp_Shift
VALUES ('Devansh', 'A'),
    ('Sunil', 'B'),
    ('Sakshi', 'A'),
    ('Vijay', 'C');

SELECT *
FROM Employee;

SELECT *
FROM Emp_Company;

SELECT *
FROM Company;

SELECT *
FROM Manager;

SELECT *
FROM Emp_Shift;