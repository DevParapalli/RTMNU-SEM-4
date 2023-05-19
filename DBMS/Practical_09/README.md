# DBMS Practical 09

## Aim: To implement the Woolman Algorithm for lossless decomposition in DBMS

### Theory

Lossless decomposition is a decomposition technique where we ensure that we can always recover the original relation from the smaller relations produced by the decomposition. In other words, no information is lost during the decomposition process. This ensures that we maintain all of the functional dependencies present in the original schema.

This algorithm is a test for checking if a given decomposition is lossy or lossless.

The algorithm is as follows:

1. Initialization : `A table is created with the attributes of the original relation as the columns and the smaller relations as the rows. The table is then filled with the values of the smaller relations, with a(column) if attribute is present and b(row, column) if attribute is not present.`
2. Processing: `For every functional dependency in the original relation, we check if the smaller relations commonly contain the attributes on the left hand side of the functional dependency. If they do, we mark the right hand side with the common value in the table, preferring a over b. If they do not, we leave it as it is.`
3. Termination: `The algorithm terminates when either one of the rows is completely filled with a or, when the table is not changed in a pass. If there is a row that contains all a, then the decomposition is lossless. If not, then the decomposition is lossy.`

### Code

- main.py next to this file.
