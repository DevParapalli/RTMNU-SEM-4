# DBMS Practical 06 - Attribute Closure

Attribute closure, also known as functional dependency closure, is a concept in database theory that involves determining all the attributes that are functionally dependent on a given set of attributes. In other words, it is the process of finding all the attributes that can be inferred from a given set of attributes using a set of functional dependencies.

The importance of attribute closure lies in its use in database design and optimization. By identifying the functional dependencies between attributes, one can optimize the database schema by eliminating redundancy and improving data integrity. It also helps in query optimization and improves the performance of the database.

Algorithm for Attribute Closure:

The algorithm for finding the attribute closure of a set of attributes is as follows:

1. Start with the given set of attributes.
2. For each attribute in the set, determine its closure by finding all the attributes that can be inferred from it using the given set of functional dependencies.
3. Add all the attributes found in step 2 to the set.
4. Repeat steps 2-3 until no new attributes can be added to the set.
5. The final set of attributes is the attribute closure.

Example:

<!-- We have to do this on our own -->

A → B
B → C, D
C → E
D, E → F
