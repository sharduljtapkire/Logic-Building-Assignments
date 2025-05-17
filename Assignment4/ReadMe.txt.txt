This repository contains five C programs, each designed to perform specific operations on numbers such as finding factors, non-factors, and their mathematical manipulations.

1. Question1.c
Purpose:
Calculates the product of all factors of a given number (excluding the number itself).
Function Used: int MultFact(int iNo)

Example:
Input: 6
Output: Product of factors: 12 (Factors: 1, 2, 3 → 1×2×3 = 6)

2. Question2.c
Purpose:
Displays the factors of a number in reverse order (excluding the number itself).
Function Used: int FactRev(int iNo)

Example:
Input: 12
Output: 6 4 3 2 1

3. Question3.c
Purpose:
Displays all non-factors of the given number (i.e., numbers that do not divide the number completely).
Function Used: void NonFact(int iNo)

Example:
Input: 6
Output: 4 5

4. Question4.c
Purpose:
Calculates the sum of all non-factors of the given number.
Function Used: int SumNonFact(int iNo)

Example:
Input: 6
Output: Sumation Of Non Factors Is : 15 (Non-factors: 4 + 5 = 9)

5. Question5.c
Purpose:
Finds the difference between the sum of factors and sum of non-factors of the given number.
Function Used: int FactDiff(int iNo)

Example:
Input: 6
Output: Difference Of Factors & Non Factors Is : -3
(Sum of factors = 1 + 2 + 3 = 6, Non-factors = 4 + 5 = 9, Difference = 6 - 9 = -3)

How to Compile and Run
To compile and run any of the files:

bash
Copy
Edit
gcc Question1.c -o Myexe
Myexe.exe
Replace Question1.c with the desired filename for other programs.

