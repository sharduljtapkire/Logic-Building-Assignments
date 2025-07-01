# Singly Linked List Operations

This repository contains several C programs that demonstrate various operations on a singly linked list. Each program focuses on a specific task related to processing the data within the nodes of the linked list.

## Table of Contents

- [Introduction](#introduction)
- [File Descriptions](#file-descriptions)
- [How to Compile and Run](#how-to-compile-and-run)
- [Data Structures](#data-structures)
- [Common Functions](#common-functions)

## Introduction

These C programs implement a singly linked list and provide functions to manipulate and display its elements. Each `QuestionX.c` file (where X is a number) addresses a unique requirement for processing the data stored in the linked list nodes.

## File Descriptions

* **`Question1.c`**:
    * **Functionality**: Reverses each individual number stored in the nodes of the linked list. For example, if a node contains `41`, it will be changed to `14`.
    * **Main Function Operations**:
        1.  Creates a linked list.
        2.  Displays the original linked list.
        3.  Calls the `Reverse` function to reverse the digits of each element.
        4.  Displays the linked list after the reversal.

* **`Question2.c`**:
    * **Functionality**: Identifies and displays all palindrome numbers present in the linked list. A palindrome number reads the same forwards and backward (e.g., `11`, `414`).
    * **Main Function Operations**:
        1.  Creates a linked list.
        2.  Displays the original linked list.
        3.  Calls the `DisplayPallindrome` function to print palindrome elements.

* **`Question3.c`**:
    * **Functionality**: Calculates and displays the product of digits for each number in the linked list. For example, for `28`, the product is `2 * 8 = 16`.
    * **Main Function Operations**:
        1.  Creates a linked list.
        2.  Displays the original linked list.
        3.  Calls the `DisplayProduct` function to print the product of digits for each element.

* **`Question4.c`**:
    * **Functionality**: Finds and displays the smallest digit within each number in the linked list. For example, for `41`, the smallest digit is `1`.
    * **Main Function Operations**:
        1.  Creates a linked list.
        2.  Displays the original linked list.
        3.  Calls the `DisplaySmall` function to print the smallest digit of each element.

* **`Question5.c`**:
    * **Functionality**: Finds and displays the largest digit within each number in the linked list. For example, for `89`, the largest digit is `9`.
    * **Main Function Operations**:
        1.  Creates a linked list.
        2.  Displays the original linked list.
        3.  Calls the `DisplayLarge` function to print the largest digit of each element.

## How to Compile and Run

To compile and run any of these C programs, you will need a C compiler (like GCC).

1.  **Open your terminal or command prompt.**

2.  **Navigate to the directory** where you have saved the `.c` files.

3.  **Compile the desired program.** For example, to compile `Question1.c`:
    ```bash
    gcc Question1.c -o question1
    ```
    This command compiles `Question1.c` and creates an executable file named `question1`.

4.  **Run the executable.**
    ```bash
    ./question1
    ```

    Repeat these steps for `Question2.c`, `Question3.c`, `Question4.c`, and `Question5.c` by replacing `question1` with the respective file names (e.g., `question2`, `question3`, etc.).

## Data Structures

All programs use a common structure for the linked list nodes:

```c
struct node
{
    int Data;        // Stores the integer data
    struct node *Next; // Pointer to the next node in the list
};

typedef struct node NODE;      // Alias for struct node
typedef struct node* PNODE;     // Alias for a pointer to a node
typedef struct node** PPNODE;    // Alias for a pointer to a pointer to a node