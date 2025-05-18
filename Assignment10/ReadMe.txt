```
Project: C Programming Exercises on Number Digits

Description:
This project contains five C programs, each designed to perform a specific operation on the digits of an integer provided by the user.

Files:

Question1.c: Counts the number of even digits in the given number.
Question2.c: Counts the number of odd digits in the given number.
Question3.c: Counts the number of digits that fall within the range of 3 and 7 (inclusive) in the given number.
Question4.c: Calculates the multiplication of all the digits in the given number (excluding zeros).
Question5.c: Calculates the difference between the sum of even digits and the sum of odd digits in the given number.

How to Compile and Run:

Compilation:
  Use a C compiler (like GCC) to compile the programs.  For example, to compile Question1.c, use the following command:
    gcc Question1.c -o Myexe

Running:
  Execute the compiled program. For example, to run Question1:
    Myexe.exe

  The program will then prompt you to enter a number.  After you provide the input, it will display the result as per the program's functionality.

Functions:

Each program contains the following two functions:

A user-defined function to perform the specific digit operation (e.g., CountEvenDigits, CountOddDigits, CountRange, MultDigits, CountDiff).  These functions take an integer as input and return the calculated result.
The main function, which handles user input and output.  It prompts the user to enter a number, calls the user-defined function, and prints the returned result.

Notes:

Error Handling: The programs handle negative input numbers by converting them to their positive counterparts before processing the digits.
Assumptions:  The programs assume that the user will input integer values.  No explicit error handling is included for non-integer inputs.
```