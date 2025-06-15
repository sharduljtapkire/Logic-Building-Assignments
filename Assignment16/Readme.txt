The problem set contains five C programs (Question1.c to Question5.c), each designed to print a specific pattern to the console based on user input for rows and columns.

### `Question1.c`

This program prints a right-angled triangle pattern of asterisks.
The `Pattern` function takes `iRow` (number of rows) and `iCol` (number of columns) as input. It validates that both `iRow` and `iCol` are at least 1. If not, it prints "Invalid input". The outer loop iterates through each row, and the inner loop iterates through each column. An asterisk `*` is printed if the column index `j` is less than or equal to the row index `i`, otherwise a space is printed. This creates a triangle where each row has `i` asterisks followed by `iCol - i` spaces.

**Example for `Question1.c`:**
Input: `iRow = 4`, `iCol = 4`
Output:
```
*
**
***
****
```

### `Question2.c`

This program prints an inverted right-angled triangle pattern of asterisks.
The `Pattern` function is similar to `Question1.c` in its input validation. The logic for printing the asterisk is `j <= (iCol - i + 1)`. This condition ensures that in each row `i`, asterisks are printed from the first column up to `iCol - i + 1`, effectively creating an inverted triangle.

**Example for `Question2.c`:**
Input: `iRow = 4`, `iCol = 4`
Output:
```
****
***
**
*
```

### `Question3.c`

This program prints a pattern based on the relationship between row and column indices, requiring the number of rows and columns to be equal.
The `Pattern` function first checks if `iRow` is equal to `iCol`. If not, it prints "Invalid input". It then iterates through the rows and columns.
* If `i == j` (main diagonal), it prints a `$`.
* If `i > j` (below the main diagonal), it prints a `#`.
* If `i < j` (above the main diagonal), it prints a `*`.

**Example for `Question3.c`:**
Input: `iRow = 3`, `iCol = 3`
Output:
```
$ * *
# $ *
# # $
```

### `Question4.c`

This program prints a pattern that forms a border and a main diagonal using asterisks, also requiring the number of rows and columns to be equal.
The `Pattern` function checks if `iRow` is equal to `iCol`. If not, it prints "Invalid input". The inner loop prints an asterisk `*` if the current position is on the first row (`i == 1`), last row (`i == iRow`), first column (`j == 1`), last column (`j == iCol`), or on the main diagonal (`i == j`). Otherwise, it prints a space.

**Example for `Question4.c`:**
Input: `iRow = 5`, `iCol = 5`
Output:
```
*   *   *   *   *
*   *           *   
*       *       *
*           *   *
*   *   *   *   *
```

### `Question5.c`

This program prints a right-aligned triangle of numbers, where each row starts with a tab character for alignment and then prints numbers from the current column index `j` up to `iCol`. It requires the number of rows and columns to be equal.
The `Pattern` function checks if `iRow` is equal to `iCol`. If not, it prints "Invalid input.". It then uses a nested loop structure. The first inner loop prints tabs (`\t`) to create a right-aligned effect, with the number of tabs increasing with each row. The second inner loop prints the column number `j` starting from the current row index `i` up to `iCol`.

**Example for `Question5.c`:**
Input: `iRow = 4`, `iCol = 4`
Output:
```
1 2 3 4
  2 3 4
    3 4
      4
```