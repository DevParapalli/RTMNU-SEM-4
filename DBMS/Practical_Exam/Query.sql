-- Code to demonstrate Aggregate Functions in SQL

DROP TABLE IF EXISTS Practical_Exam;

CREATE TABLE Practical_Exam (
    id INTEGER NOT NULL,
    name VARCHAR(20) NOT NULL,
    marks INTEGER NOT NULL,

    PRIMARY KEY (id)
);

INSERT INTO Practical_Exam VALUES (1, 'John', 10),
(2, 'Alex', 1),
(3, 'Dave', 7),
(4, 'Richard', 8),
(5, 'Mitchel', 2);



-- COUNT of Failed Students

SELECT COUNT(*) AS "numFailed" FROM Practical_Exam WHERE marks < 5;

-- Names of highest mark students

SELECT name as "Name", marks as "Marks" FROM Practical_Exam WHERE marks = (SELECT MAX(marks) FROM Practical_Exam);

-- Names of students with less than average marks

SELECT name as "Name", marks as "Marks" FROM Practical_Exam WHERE marks < (SELECT AVG(marks) FROM Practical_Exam);

