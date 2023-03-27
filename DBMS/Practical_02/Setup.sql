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
VALUES ('Devansh', 'Nagpur'),
('Ayush', 'Delhi'),
('Nikhil', 'Mumbai'),
('Prasad', 'Patna'),
('Kinjal', 'Pune'),
('Sakshi', 'Nagpur');
INSERT INTO Emp_Company
VALUES ('Devansh', 'Microsoft', 100000000, '01-JAN-2026'),
('Ayush', 'Intel', 6000000, '01-JAN-2026'),
('Nikhil', 'Acer', 7000000, '01-JAN-2026'),
('Prasad', 'Asus', 8000000, '01-JAN-2026'),
('Kinjal', 'Persistent', 9000000, '01-JAN-2026'),
('Sakshi', 'Cognizant', 100000000, '01-JAN-2026');
INSERT INTO Company
VALUES ('Microsoft', 'San Francisco'),
('Intel', 'Delhi'),
('Acer', 'Mumbai'),
('Asus', 'Patna'),
('Persistent', 'Pune'),
('Cognizant', 'Nagpur');
INSERT INTO Manager
VALUES ('Devansh', 'Anant'),
('Ayush', 'Raj'),
('Nikhil', 'Rajesh'),
('Prasad', 'Rakesh'),
('Kinjal', 'Ankit'),
('Sakshi', 'Raj');
INSERT INTO Emp_Shift
VALUES ('Devansh', 'A'),
('Ayush', 'B'),
('Nikhil', 'A'),
('Prasad', 'B'),
('Kinjal', 'A'),
('Sakshi', 'B');
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