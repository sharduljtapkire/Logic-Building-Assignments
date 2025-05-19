# C Pattern Printing Programs

This repository contains five C programs that generate different numerical and character patterns based on user-provided row and column values.

## Program Descriptions

* **Question1.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where each row contains a sequence of increasing numbers, starting from 1. The numbers reset to 1 at the beginning of each new row.
    * Example Output (for input 4 rows, 4 cols):
        ```
        1       2       3       4
        1       2       3       4
        1       2       3       4
        1       2       3       4
        ```

* **Question2.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where each row contains a sequence of numbers, incrementing by 2.  Even-numbered rows start with 2, and odd-numbered rows start with 1.
    * Example Output (for input 4 rows, 4 cols):
        ```
        1       3       5       7
        2       4       6       8
        1       3       5       7
        2       4       6       8
        ```

* **Question3.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where odd-numbered rows contain lowercase alphabets starting from 'a', and even-numbered rows contain numbers starting from 1.
    * Example Output (for input 4 rows, 4 cols):
        ```
        a       b       c       d
        1       2       3       4
        a       b       c       d
        1       2       3       4
        ```

* **Question4.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where odd-numbered rows contain positive numbers starting from 1, and even-numbered rows contain negative numbers starting from -1.
    * Example Output (for input 4 rows, 4 cols):
        ```
        1       2       3
        -1      -2      -3
        1       2       3
        -1      -2      -3
        ```

* **Question5.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where each element is the sum of the current row number, the column number, and 1.
    * Example Output (for input 4 rows, 4 cols):
        ```
        2       3       4       5
        3       4       5       6
        4       5       6       7
        5       6       7       8
        ```

## How to Compile and Run

1.  **Compilation:**
    * Use a C compiler (like GCC) to compile the programs.  For example, to compile `Question1.c`:
        ```bash
        gcc Question1.c -o Question1
        ```
    * Repeat this for each of the `.c` files, changing the output name accordingly.

2.  **Execution:**
    * Run the compiled executable.  For example:
        ```bash
        ./Question1
        ```
    * The program will then prompt you to enter the number of rows and columns.
