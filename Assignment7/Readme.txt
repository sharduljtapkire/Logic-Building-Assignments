````
README

This directory contains five C programs:

* **Question1.c:** This program takes an integer as input and performs the following:
    * If the number is less than 50, it prints "Small".
    * If the number is greater than 50 and less than 100, it prints "Medium".
    * If the number is greater than or equal to 100, it prints "Large".

* **Question2.c:** This program calculates the factorial of a given integer.
    * It returns "Invalid input" if the input is a negative number.
    * Otherwise, it calculates and prints the factorial.

* **Question3.c:** This program takes an integer as input and prints its multiplication table from 1 to 10 (inclusive).

* **Question4.c:** This program takes an integer as input and prints its multiplication table in reverse order, from 10 down to 1 (inclusive).

* **Question5.c:** This program calculates the difference between the factorial of even digits and the factorial of odd digits of a given number.
    * It handles negative input by taking its absolute value.

Another set of 5 programs with similar names are also included which perform similar functionalities.

How to compile and run the programs:

1.  **Compilation:**
    Use a C compiler (like GCC) to compile the programs.  For example, to compile `Question1.c`, use the following command:

    ```bash
    gcc Question1.c -o Myexe
    ```

    Repeat this for each of the `.c` files, changing the output name accordingly.

2.  **Execution:**
    After successful compilation, you can run the programs from the command line.  For example, to run the compiled `Question1` program:

    ```bash
    Myexe.exe
    ```

    The program will then prompt you for input as required.
````