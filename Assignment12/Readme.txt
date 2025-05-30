**README**

**Project: C Pattern Printing Programs**

**Description:**

This project contains five C programs, each designed to print a specific pattern to the console based on user-provided row and column values.  These programs utilize nested loops to control the pattern generation.

**Files:**

  * **Question1.c:** Prints a rectangular pattern of asterisks ('\*').
  * **Question2.c:** Prints a rectangular pattern where each row contains the column numbers (1 to iCol).
  * **Question3.c:** Prints a rectangular pattern where each row contains the column numbers in descending order (iCol to 1).
  * **Question4.c:** Prints a rectangular pattern alternating asterisks ('\*') and hash symbols ('\#') in each row.
  * **Question5.c:** Prints a rectangular pattern where each row contains the row number (1 to iRow).

**How to Compile and Run:**

1.  **Compilation:**

      * Open a terminal or command prompt.
      * Navigate to the directory containing the C files.
      * Use a C compiler (like GCC) to compile each program.  For example, to compile `Question1.c`, use the following command:
        ```bash
        gcc Question1.c -o Myexe
        ```
        Repeat this for each of the `.c` files, changing the output name (`-o`) accordingly (e.g., `Question2`, `Question3`, etc.).

2.  **Execution:**

      * After successful compilation, run the executable. For example:
        ```bash
        Myexe.exe
        ```
        The program will prompt you to enter the number of rows and columns.  Enter the values and press Enter. The pattern will then be printed to the console.  Do the same for the other executables.

**Example Usage (for Question1.c):**

```
Enter the number of rows : 4
Enter the number of Coloumns : 4
* * * *
* * * *
* * * *
* * * *
```

**File Details:**

  * **Question1.c:**

      * Asks the user for the number of rows (`iRow`) and columns (`iCol`).
      * The `Pattern` function uses nested loops to print '\*' `iRow` times and `iCol` times in each row, separated by tabs.

  * **Question2.c:**

      * Asks the user for `iRow` and `iCol`.
      * The `Pattern` function prints the column number (`j`) in each position, from 1 to `iCol` for each row.

  * **Question3.c:**

      * Asks the user for `iRow` and `iCol`.
      * The `Pattern` function prints the column number (`j`) in descending order, from `iCol` down to 1 for each row.

  * **Question4.c:**

      * Asks for `iRow` and `iCol`.
      * The `Pattern` function prints '\*' if the column number (`j`) is odd, and '\#' if it's even.

  * **Question5.c:**

      * Asks for `iRow` and `iCol`.
      * The `Pattern` function prints the row number (`i`) in each position of the row.

**Note:** All programs follow a similar structure: they take row and column inputs from the user and then call a `Pattern` function to generate the output.
