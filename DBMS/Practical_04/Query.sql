-- Query 1
-- Find Sailor IDs who have reserved red boats or green boats.
SELECT sid
FROM Reserves AS R
    JOIN Boats AS B ON R.bid = B.bid
WHERE B.color = 'Red'
UNION
SELECT sid
FROM Reserves AS R
    JOIN Boats AS B ON R.bid = B.bid
WHERE B.color = 'Green';

-- Query 2
-- Find the sailor names who have reserved red boats and green boats.
Select S.sname
FROM Sailors AS S
    JOIN Reserves AS R ON S.sid = R.sid
    JOIN Boats AS B ON R.bid = B.bid
WHERE B.color = 'Red'
INTERSECT
Select S.sname
FROM Sailors AS S
    JOIN Reserves AS R ON S.sid = R.sid
    JOIN Boats AS B ON R.bid = B.bid
WHERE B.color = 'Green';

-- Query 3
-- Find the sailor names who have reserved red boats but not green boats.
Select S.sname
FROM Sailors AS S
    JOIN Reserves AS R ON S.sid = R.sid
    JOIN Boats AS B ON R.bid = B.bid
WHERE B.color = 'Red'
EXCEPT
Select S.sname
FROM Sailors AS S
    JOIN Reserves AS R ON S.sid = R.sid
    JOIN Boats AS B ON R.bid = B.bid
WHERE B.color = 'Green';
