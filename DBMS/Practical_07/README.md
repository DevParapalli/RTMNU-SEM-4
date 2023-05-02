# DBMS Practical 07

## Aim: Study of Normalization in RDBMS

### Theory

- What is normalization ?
- Why do we need normalization ?
- What are the normal forms ?
- 1NF, 2NF, 3NF, BCNF, 4NF, 5NF (No need of 6NF and DKNF)

### Code: Not Applicable

### Resources

- <https://www.scaler.com/topics/dbms/normalization-in-dbms/>
- <https://learn.microsoft.com/en-us/office/troubleshoot/access/database-normalization-description>
- <https://en.wikipedia.org/wiki/Database_normalization>

### Theory Content

Normalization is the process of organizing the data and the attributes of a database. It is performed to reduce the data redundancy in a database and to ensure that data is stored logically. Data redundancy in DBMS means having the same data but at multiple places. It is necessary to remove data redundancy because it causes anomalies in a database. There are three types of anomalies that occur in a database due to data redundancy. These are insertion anomaly, deletion anomaly, and update anomaly.

A database anomaly is a flaw in the database that occurs because of poor planning and redundancy.

- Insertion anomalies: This occurs when we are not able to insert data into a database because some attributes may be missing at the time of insertion.
- Updation anomalies: This occurs when the same data items are repeated with the same values and are not linked to each other.
- Deletion anomalies: This occurs when deleting one part of the data deletes the other necessary information from the database.

There are 6 types of normal forms that are usually used in relational databases.

1NF: A relation is in 1NF if all its attributes have an atomic value, and the relation does not contain any composite attributes or multi-valued attributes.

```txt
To solve multi-valued attributes, we can create a new row for each of the values of the multi-valued attribute to convert the table into the 1NF. To solve composite attributes, we can break the composite attribute into smaller atomic attributes and add new columns.
```

2NF: A relation is in 2NF if it is in 1NF and all non-key attributes are fully functional dependent on the candidate key in DBMS.

```txt
To make a 1NF relation a 2NF relation, remove the functionally dependent attributes in the partial dependencies of the first normal form relation, and place those partial dependency dependent attributes in a relation where their corresponding determinant attributes are an entire candidate key.
```

3NF: A relation is in 3NF if it is in 2NF and there is no transitive dependency.

```txt
To decompose a relation into 3NF from 2NF, break the table into the canonical cover functional dependencies, then create a relation for every candidate key of the original relation which was not already a subset of a relation in the decomposition.
```

BCNF: A relation is in BCNF if it is in 3NF and for every Functional Dependency, LHS is the super key.

```txt
If a relation R is not in BCNF due to a functional dependency X→Y, decompose R into BCNF by replacing that relation with two sub-relations:

One with the attributes X^+,
and another with the attributes R - X^+ + X. Note that R represents all the attributes in the original relation.
Check whether both sub-relations are in BCNF and repeat the process recursively with any sub-relation which is not in BCNF.
```

4NF: A relation is in 4NF if and only if, for every one of its non-trivial multivalued dependencies X ↠ Y, X is a superkey—that is, X is either a candidate key or a superset thereof and it is in BCNF.

>A multivalued dependency exists when there are at least three attributes (like X,Y and Z) in a relation and for a value of X there is a well defined set of values of Y and a well defined set of values of Z. However, the set of values of Y is independent of set Z and vice versa.

```txt
To decompose a relation into 4NF from BCNF, split the multi-valued dependencies such that they are dependent on the candidate key only. Then, create a new relation for each of the multi-valued dependencies.
```

5NF: A table is said to be in the 5NF if and only if every non-trivial join dependency in that table is implied by the candidate keys. It is the final normal form as far as removing redundancy is concerned.

```txt
Split the relation into a logical set of relations such that the original relation can be represented as a natural join of the new relations. This is done by removing the join dependency from the original relation and creating a new relation for each of the tables in the join dependency.
```

>A table T is subject to a join dependency if T can always be recreated by joining multiple tables each having a subset of the attributes of T. If one of the tables in the join has all the attributes of the table T, the join dependency is called trivial.
