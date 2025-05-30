Here's the updated README.md file, with the examples removed as you requested:

---

# C Pattern Programs

This repository contains a collection of C programs, each designed to print a specific pattern to the console based on user-defined row and column inputs.

## Programs

Each `QuestionX.c` file contains a `Pattern` function that takes `iRow` (number of rows) and `iCol` (number of columns) as input and prints a unique pattern. The `main` function handles user input for `iRow` and `iCol` and calls the `Pattern` function.

### `Question1.c`
This program prints a right-angled triangle pattern of asterisks (`*`) and hashes (`#`). Asterisks are printed when the row number is greater than or equal to the column number (`i >= j`), forming the lower triangle. Hashes are printed otherwise.

### `Question2.c`
This program prints an inverted right-angled triangle pattern of asterisks (`*`) and hashes (`#`). Asterisks are printed when the column number is less than or equal to `(iCol - i + 1)`, forming the upper inverted triangle. Hashes are printed otherwise.

### `Question3.c`
This program prints a diagonal pattern using a dollar sign (`$`) and asterisks (`*`). A dollar sign is printed only when the row number equals the column number (`i == j`), forming the main diagonal. All other positions print an asterisk.

### `Question4.c`
This program prints a hollow rectangle pattern using asterisks (`*`) and at signs (`@`). Asterisks are used for the border (first row, last row, first column, last column), while all inner cells print an at sign.

### `Question5.c`
This program prints a pattern with numbers on the borders and asterisks (`*`) inside. The first and last rows, and the first and last columns, print their respective column numbers. All inner cells print an asterisk.

## How to Compile and Run

To compile and run any of these C programs, you will need a C compiler (like GCC).

1.  **Save the code:** Save the content of the desired `QuestionX.c` file (e.g., `Question1.c`) into a file with a `.c` extension.

2.  **Open a terminal or command prompt.**

3.  **Navigate to the directory** where you saved the `.c` file.

4.  **Compile the program** using GCC:
    ```bash
    gcc QuestionX.c -o QuestionX
    ```
    (Replace `QuestionX` with the actual file number, e.g., `Question1.c`)

5.  **Run the executable:**
    ```bash
    ./QuestionX
    ```
    The program will then prompt you to "Enter number of rows:" and "Enter number of columns:". Enter integer values for these.

---