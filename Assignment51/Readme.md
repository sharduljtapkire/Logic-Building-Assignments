### Project Overview 📝

This project contains a collection of five Java programs, each designed to perform a different operation on a user-defined matrix. The programs demonstrate fundamental matrix manipulations and calculations using object-oriented principles. A `MatrixOperations` class encapsulates the core logic, while a separate `Question` class handles user input and output for each specific task.

***

### How to Compile and Run the Programs 💻

1.  **Save:** Save each code snippet into a separate `.java` file with the name matching the class name (e.g., `Question1.java`, `Question2.java`).
2.  **Open Terminal:** Open a terminal or command prompt.
3.  **Compile:** Use the Java compiler (`javac`) to compile the desired file. For example:
    `javac Question1.java`
4.  **Run:** Execute the compiled Java program using the `java` command:
    `java Question1`
5.  **Input:** Follow the on-screen prompts to enter the matrix dimensions (rows and columns) and its elements.

***

### Program Descriptions and Functionality ✨

#### **1. Swap Consecutive Rows**

This program takes a matrix as input and **swaps the contents of each consecutive pair of rows**. For instance, it swaps row 0 with row 1, row 2 with row 3, and so on. The program handles both even and odd numbers of rows.

* **Class `MatrixOperations`**:
    * `swapConsecutiveRows(int[][] matrix, int iRow, int iCol)`: Iterates through the matrix, swapping elements between `matrix[i]` and `matrix[i+1]` for every other row `i`.
    * `displayMatrix(int[][] matrix, int iRow, int iCol)`: Prints the matrix elements in a clear row-column format.
* **Class `Question1`**: Manages user input and calls the methods from `MatrixOperations` to demonstrate the row swap.

#### **2. Swap Consecutive Columns**

Similar to the first program, this one swaps the contents of each **consecutive pair of columns**. It swaps column 0 with column 1, column 2 with column 3, and so forth.

* **Class `MatrixOperations`**:
    * `swapConsecutiveColumns(int[][] matrix, int iRow, int iCol)`: Loops through the columns, swapping elements between `matrix[i][j]` and `matrix[i][j+1]` for every other column `j`.
    * `displayMatrix(...)`: Displays the matrix.
* **Class `Question2`**: Handles input, calls the swap method, and displays the result.

#### **3. Transpose a Matrix**

This program calculates and displays the **transpose of a matrix**. The transpose is a new matrix where the rows and columns of the original matrix are interchanged. The element at `(i, j)` in the original matrix becomes the element at `(j, i)` in the transposed matrix.

* **Class `MatrixOperations`**:
    * `transposeMatrix(int[][] matrix, int iRow, int iCol)`: Creates a new matrix with dimensions `iCol x iRow` and copies the elements from the original matrix to their transposed positions.
    * `displayMatrix(...)`: Displays the matrix.
* **Class `Question3`**: Prompts the user for a matrix, calls the transpose method, and prints both the original and transposed matrices.

#### **4. Trace and Normal of a Matrix**

This program computes two common mathematical properties of a matrix:
* **Trace**: The **sum of the elements on the main diagonal** (top-left to bottom-right). This is only defined for square matrices.
* **Normal**: The **square root of the sum of the squares of all elements** in the matrix.

* **Class `MatrixOperations`**:
    * `trace(int[][] matrix, int iRow, int iCol)`: Calculates the sum of diagonal elements. It returns -1 if the matrix is not square.
    * `normal(int[][] matrix, int iRow, int iCol)`: Calculates the sum of squares of all elements and then finds the square root using `Math.sqrt`.
* **Class `Question4`**: Gets the matrix from the user, then calls the `trace` and `normal` methods to display the results.

#### **5. Sum of Border Elements**

This program finds the **sum of all elements on the border of a matrix**. The border includes the first row, the last row, the first column, and the last column, with care taken to avoid double-counting the corner elements.

* **Class `MatrixOperations`**:
    * `sumOfBorderElements(int[][] matrix, int iRow, int iCol)`: Loops through the top and bottom rows, and then through the inner parts of the left and right columns to calculate the total sum.
* **Class `Question5`**: Reads the matrix from the user and outputs the calculated sum of its border elements.