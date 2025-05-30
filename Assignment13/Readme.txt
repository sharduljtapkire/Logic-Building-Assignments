# C Pattern Printing Programs

This repository contains five C programs that generate different patterns based on user-provided row and column values.

## Program Descriptions

* **Question1.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where each row contains the uppercase alphabet starting from 'A'.
    * Example: If the user enters 3 rows and 4 columns, the output will be:
    
    ```
    A    B    C    D
    A    B    C    D
    A    B    C    D
    ```

* **Question2.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where odd-numbered rows contain uppercase alphabets ('A', 'B', ...) and even-numbered rows contain lowercase alphabets ('a', 'b', ...).
    * Example: If the user enters 4 rows and 3 columns, the output will be:
    
    ```
    A    B    C
    a    b    c
    A    B    C
    a    b    c
    ```

* **Question3.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where each row contains the uppercase alphabet corresponding to the row number (starting from 'A' for the first row).
    * Example: If the user enters 3 rows and 4 columns, the output will be:
    
    ```
    A    A    A    A
    B    B    B    B
    C    C    C    C
    ```

* **Question4.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where each row contains the row number, repeated for the number of columns. The row numbers descend from the input row number down to 1.
    * Example: If the user enters 4 rows and 4 columns, the output will be:
    
    ```
    4    4    4    4
    3    3    3    3
    2    2    2    2
    1    1    1    1
    ```

* **Question5.c:** * Asks the user for the number of rows and columns.
    * Prints a pattern where numbers are printed sequentially from 1, incrementing with each position, row-wise.
    * Example: If the user enters 4 rows and 4 columns, the output will be:
    
    ```
    1    2    3    4
    5    6    7    8
    9    10   11   12
    13   14   15   16
    ```

## How to Compile and Run

1.  **Save the C code:** Save each program as its respective `.c` file (e.g., `Question1.c`, `Question2.c`, etc.).
2.  **Compile:** Use a C compiler (like GCC) to compile the code. Open a terminal or command prompt and navigate to the directory where you saved the files.  
    * To compile `Question1.c`, for example, use the command:  
        ```bash
        gcc Question1.c -o Myexe
        ```
    * Repeat this for each `.c` file, changing the output name (`-o`) accordingly.
3.  **Run:** Execute the compiled program.  
    * For `Question1.c`, run:  
        ```bash
        ./Question1  (or  .\Question1.exe  on Windows)
        ```
    * The program will then prompt you to enter the number of rows and columns.
