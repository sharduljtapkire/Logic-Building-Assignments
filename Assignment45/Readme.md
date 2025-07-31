# Java Matrix Operations

This project contains a collection of Java programs that perform various operations on matrices. Each program demonstrates a specific matrix manipulation or checking function. The core logic for matrix handling is encapsulated within a `Matrix` class, which is utilized by the main class in each file.

## Core `Matrix` Class Functionality

All programs use a common `Matrix` class structure with the following fundamental methods:

  * **`Matrix(int A, int B)`**: A constructor that initializes a matrix with `A` rows and `B` columns.
  * **`Accept()`**: Prompts the user to enter the elements of the matrix.
  * **`Display()`**: Prints the current elements of the matrix to the console in a grid format.

## Program Descriptions

### 1\. `Question1.java`: Transpose a Matrix

This program calculates and displays the transpose of a user-defined matrix. The transpose of a matrix is obtained by flipping the matrix over its main diagonal, switching the row and column indices.

**Key Method:**

  * **`Transpose()`**: Iterates through the original matrix and prints its elements in a transposed order. The original matrix remains unchanged.

### 2\. `Question2.java`: Reverse Each Row

This program reverses the elements in each row of the matrix.

**Key Method:**

  * **`ReverseRows()`**: For each row in the matrix, it swaps the elements from the beginning and the end, moving inwards until the entire row is reversed. The original matrix is modified.

### 3\. `Question3.java`: Reverse Each Column

This program reverses the elements in each column of the matrix.

**Key Method:**

  * **`ReverseColumns()`**: For each column, it swaps the elements from the top and bottom rows, moving inwards until the entire column is reversed. The original matrix is modified.

### 4\. `Question4.java`: Check for Identity Matrix

This program checks if a given matrix is an identity matrix. An identity matrix is a square matrix in which all the elements of the principal diagonal are ones and all other elements are zeros.

**Key Method:**

  * **`ChkIdentity()`**: Returns `true` if the matrix meets the following criteria:
    1.  It is a square matrix (number of rows equals the number of columns).
    2.  All diagonal elements are `1`.
    3.  All non-diagonal elements are `0`.
        Otherwise, it returns `false`.

### 5\. `Question5.java`: Check for Sparse Matrix

This program determines if a given matrix is a sparse matrix. A matrix is considered sparse if the number of zero elements is more than half of the total number of elements.

**Key Method:**

  * **`ChkSparse()`**: Counts the number of zero elements in the matrix. It returns `true` if the zero count is greater than `(rows * columns) / 2`, and `false` otherwise.

## How to Compile and Run

You can compile and run each Java file individually using a Java Development Kit (JDK).

**Example for `Question1.java`:**

```bash
# Compile the Java source file
javac Question1.java

# Run the compiled program
java Question1
```

You will be prompted to enter the number of rows and columns, followed by the elements of the matrix. The program will then execute the specific matrix operation and display the result.