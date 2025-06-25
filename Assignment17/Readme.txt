The `Pattern` function in each C program takes two integer arguments, `iRow` for the number of rows and `iCol` for the number of columns. All programs first check if `iRow` is equal to `iCol`. If they are not equal, an "Invalid input" message is printed, and the function returns. Otherwise, the programs proceed to print different patterns based on nested loops and conditional statements.

Here's a breakdown of each program:

* **Question1.c:**
    * This program prints a square pattern.
    * It prints '#' characters along the anti-diagonal (where `i + j == iCol + 1`).
    * All other positions are filled with '*' characters.

* **Question2.c:**
    * This program also prints a square pattern.
    * It prints '#' characters along the anti-diagonal (where `i + j == iCol + 1`).
    * Positions where `i + j > iCol + 1` (below the anti-diagonal) are filled with '@' characters.
    * All other positions (above the anti-diagonal) are filled with '*' characters.

* **Question3.c:**
    * This program prints a square pattern.
    * It prints '*' characters on the first row (`i == 1`), the last row (`i == iRow`), the first column (`j == 1`), the last column (`j == iCol`), and along the anti-diagonal (`i + j == iCol + 1`).
    * All other positions are filled with spaces.

* **Question4.c:**
    * This program prints a square pattern with a more complex set of conditions.
    * It prints '*' characters on the border (first row, last row, first column, last column).
    * Specific internal regions are filled with '#' and '$' characters:
        * `#` is printed for certain positions in rows 2, 3, and 4, creating a 'L' like shape.
        * `$` is printed for certain positions in rows 3, 4, and 5, creating another shape.
    * Any remaining positions not covered by the above conditions are filled with '*' characters.

* **Question5.c:**
    * This program prints a square pattern.
    * It prints the column number (`j`) on the first row (`i == 1`), the last row (`i == iRow`), the first column (`j == 1`), the last column (`j == iCol`), and along the main diagonal (`i == j`).
    * All other positions are filled with spaces.