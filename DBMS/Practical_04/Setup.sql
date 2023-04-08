DROP TABLE IF EXISTS Sailors;
DROP TABLE IF EXISTS Boats;
DROP TABLE IF EXISTS Reserves;

CREATE TABLE Sailors (
    sid INTEGER NOT NULL,
    sname VARCHAR(20) NOT NULL,
    rating INTEGER NOT NULL,
    age INTEGER NOT NULL,
    PRIMARY KEY (sid)
);

CREATE TABLE Boats (
    bid INTEGER NOT NULL,
    bname VARCHAR(20) NOT NULL,
    color VARCHAR(20) NOT NULL,
    PRIMARY KEY (bid)
);

CREATE TABLE Reserves (
    sid INTEGER NOT NULL,
    bid INTEGER NOT NULL,
    DAY DATE NOT NULL,
    PRIMARY KEY (sid, bid, DAY),
    FOREIGN KEY (sid) REFERENCES Sailors(sid),
    FOREIGN KEY (bid) REFERENCES Boats(bid)
);

INSERT INTO Sailors
VALUES (1, 'Devansh', 10, 20);
INSERT INTO Sailors
VALUES (2, 'Sebastian', 1, 62);
INSERT INTO Sailors
VALUES (3, 'Richard', 4, 64);
INSERT INTO Sailors
VALUES (4, 'Malhar', 8, 20);
INSERT INTO Sailors
VALUES (5, 'Mallory', 2, 24);
INSERT INTO Sailors
VALUES (6, 'Kinjal', 9, 20);
INSERT INTO Sailors
VALUES (7, 'Sakshi', 10, 20);
INSERT INTO Sailors
VALUES (8, 'Heetal', 8, 21);


INSERT INTO Boats
VALUES (1, 'B1', 'Red');
INSERT INTO Boats
VALUES (2, 'B2', 'Blue');
INSERT INTO Boats
VALUES (3, 'B3', 'Green');
INSERT INTO Boats
VALUES (4, 'B4', 'Red');
INSERT INTO Boats
VALUES (5, 'B5', 'Blue');
INSERT INTO Boats
VALUES (6, 'B6', 'Green');
INSERT INTO Boats
VALUES (7, 'B7', 'Red');
INSERT INTO Boats
VALUES (8, 'B8', 'Blue');
INSERT INTO Boats
VALUES (9, 'B9', 'Green');
INSERT INTO Boats
VALUES (10, 'B10', 'Red');


INSERT INTO Reserves
VALUES (1, 1, '2023-08-10');
INSERT INTO Reserves
VALUES (2, 2, '2023-08-10');
INSERT INTO Reserves
VALUES (1, 3, '2023-08-10');
INSERT INTO Reserves
VALUES (6, 4, '2023-08-11');
INSERT INTO Reserves
VALUES (8, 5, '2023-08-11');
INSERT INTO Reserves
VALUES (6, 6, '2023-08-11');
INSERT INTO Reserves
VALUES (7, 7, '2023-08-12');
INSERT INTO Reserves
VALUES (8, 8, '2023-08-12');

SELECT * FROM Sailors;
SELECT * FROM Boats;
SELECT * FROM Reserves;
