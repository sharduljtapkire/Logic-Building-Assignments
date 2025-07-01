* **`Question1.c`**: This file implements a function `SearchFirstOcc` 
which finds the first occurrence of a given number in a linked list 
and returns its position (1-indexed). If the element is not found, 
it returns -1. The `main` function demonstrates its usage by creating 
a linked list and searching for the first occurrence of `30`.

* **`Question2.c`**: This file implements a function `SearchLastOcc` 
which finds the last occurrence of a given number in a linked list 
and returns its position (1-indexed). If the element is not found, 
it returns -1. The `main` function demonstrates its usage by creating 
a linked list and searching for the last occurrence of `30`.

* **`Question3.c`**: This file implements a function `Addition` 
which calculates the sum of all elements in a linked list. 
The `main` function demonstrates its usage by creating 
a linked list and then printing the sum of its elements.

* **`Question4.c`**: This file implements a function `Maximum` 
which finds the maximum element in a linked list. It returns -1 if the list is empty. 
The `main` function demonstrates its usage by creating 
a linked list and then printing the maximum element.

* **`Question5.c`**: This file implements a function `Minimum` 
which finds the minimum element in a linked list. 
It returns -1 if the list is empty. 
The `main` function demonstrates its usage by creating 
a linked list and then printing the minimum element.

All files define a `struct node` for the linked list, 
`typedef` for `NODE`, `PNODE` (pointer to node), and `PPNODE` (pointer to pointer to node), 
and a common `InsertFirst` function to add elements at the beginning of the list. 
They also include `stdio.h` and `stdlib.h` for standard input/output and memory allocation respectively.