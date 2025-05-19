# C Pattern Printing Programs

This repository contains five C programs, each designed to print a specific pattern based on user input.

## Program Descriptions

1.  **Question1.c:**
    * Asks the user to enter a number.
    * Prints a sequence of letters starting from 'A' up to the letter corresponding to the input number (e.g., if the input is 4, it prints A B C D E).
    * Handles negative input by taking the absolute value.
    * Includes an error message if the input is greater than 26 (since there are only 26 letters in the alphabet).

2.  **Question2.c:**
    * Asks the user to enter a number.
    * Prints a sequence of numbers in descending order from the input number down to 1, separated by '# ' (e.g., if the input is 4, it prints 4 # 3 # 2 # 1 #).
    * Handles negative input by taking the absolute value.

3.  **Question3.c:**
    * Asks the user to enter a number.
    * Prints a sequence of numbers in ascending order from 1 up to the input number, separated by ' * ' (e.g., if the input is 4, it prints 1 * 2 * 3 * 4 *).
    * Handles negative input by taking the absolute value.

4.  **Question4.c:**
    * Asks the user to enter a number.
    * Prints a pattern that alternates '#' and the number, separated by ' * ' (e.g., if the input is 4, it prints # 1 * # 2 * # 3 * # 4 *).
    * Handles negative input by taking the absolute value.

5.  **Question5.c:**
    * Asks the user to enter a number.
    * Prints a sequence of even numbers from 2 up to (input number * 2)  (e.g., if the input is 4, it prints 2 4 6 8).
    * Handles negative input by taking the absolute value.

## How to Compile and Run

1.  **Compilation:**
    * Use a C compiler (like GCC).  
    * To compile a program (e.g., `Question1.c`), open a terminal and use the command:  
        ```bash
        gcc Question1.c -o Myexe
        ```
    * This creates an executable file named `Question1`.  Repeat for the other `.c` files, changing the output name accordingly.

2.  **Execution:**
    * Run the compiled executable from the terminal:
        ```bash
        Myexe.exe  #  Replace with the name of the executable you want to run
        ```

## Notes

* All programs use `stdio.h` for standard input/output operations.
* Input is taken using `scanf`.
* Output is displayed using `printf`.
* The `Pattern` function in each program encapsulates the pattern-printing logic.
* The `main` function handles user input and calls the `Pattern` function.
