````
README.md

This directory contains C programs that perform various operations on integer inputs.

**Programs:**

* **Question1.c:** * Prompts the user to enter an integer.
    * Defines a function `DisplayDigit` that extracts and prints each digit of the integer on a new line.
    * Handles negative input by converting it to positive before processing.

* **Question2.c:** * Prompts the user to enter an integer.
    * Defines a function `ChkZero` that checks if the integer contains the digit '0'.
    * Returns `TRUE` (1) if the number contains a zero, `FALSE` (0) otherwise.
    * Prints a message indicating whether the number contains zero or not.

* **Question3.c and Question4.c:** * Both programs do the same thing:
        * Prompt the user to enter an integer.
        * Define a function `countTwo` that counts the number of times the digit '2' appears in the integer.
        * Print the frequency of the digit '2'.
        * Handles negative input by converting it to positive.

* **Question5.c:** * Prompts the user to enter an integer.
    * Defines a function `Count` that counts the number of digits in the integer that are less than or equal to 6.
    * Prints the count of digits that meet the condition.
    * Handles negative input by converting it to positive.

**How to Compile and Run:**

1.  **Compilation:**
    * Use a C compiler (like GCC).  For example, to compile `Question1.c`:
        ```bash
        gcc Question1.c -o Myexe
        ```
    * Replace `Question1.c` and `Question1` with the appropriate filename for other programs.

2.  **Execution:**
    * Run the compiled executable:
        ```bash
        Myexe.exe
        ```
    * Replace `Question1` with the name of the executable you created.

**Notes:**

* All programs use `stdio.h` for standard input/output operations.
* The programs handle negative integer inputs by taking their absolute value.
* Question 2 uses `#define` to define `TRUE` and `FALSE` and `typedef` to create an alias `Bool` for `int`.
* Question 3 and Question 4 have identical code.
* Question 5 includes a corrected `printf` statement to accurately describe the program's output.
````