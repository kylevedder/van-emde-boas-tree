van emde boas tree
==================

A fast priority queue/tree/sort struct in a particular case. The vEB tree supports operations in O(loglog u) time when its keys are in the range 0 to u.

Peculiarities of my vEB tree
-----------------------------
- The vEB provides a memory-management system that can allocate and free blocks of storage on request;
- The element stored in the attribute max is not duplicate through the subtrees;
- The tree allows multiple keys that has the same value;

Operations
----------

- Insert      O(loglogu)
- Delete      O(loglogu)
- Member      O(loglogu)
- Minimum     O(1)
- Maximum     O(1)

Space
-----
O(u)
