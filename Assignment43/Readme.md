# C Programs - Recursive Functions

This repository contains five C programs that demonstrate the use of recursion to solve various problems. Each program utilizes a recursive approach to achieve its specific functionality.

## Programs Included:

### 1\. `Question1.c`

  * **Description**: This program counts the number of white spaces in a given string.
  * **Functionality**: It uses a recursive function `WhiteSpace` to iterate through the string and increment a counter for each space character encountered.
  * **How to Compile and Run**:
    ```bash
    gcc Question1.c -o Question1
    ./Question1
    ```

### 2\. `Question2.c`

  * **Description**: This program finds the largest digit in a given integer.
  * **Functionality**: It uses a recursive function `Max` with a `static` variable `iMax` to keep track of the maximum digit found during the recursion.
  * **How to Compile and Run**:
    ```bash
    gcc Question2.c -o Question2
    ./Question2
    ```

### 3\. `Question3.c`

  * **Description**: This program counts the number of lowercase characters (a-z) in a given string.
  * **Functionality**: It utilizes a recursive function `Small` to traverse the string and count characters that fall within the ASCII range of 'a' to 'z'.
  * **How to Compile and Run**:
    ```bash
    gcc Question3.c -o Question3
    ./Question3
    ```

### 4\. `Question4.c`

  * **Description**: This program finds the smallest digit in a given integer.
  * **Functionality**: It employs a recursive function `Min` with a `static` variable `iMin` (initialized to 9) to store and update the smallest digit found so far during the recursive calls.
  * **How to Compile and Run**:
    ```bash
    gcc Question4.c -o Question4
    ./Question4
    ```

### 5\. `Question5.c`

  * **Description**: This program reverses a given integer.
  * **Functionality**: It uses a recursive function `Reverse` with a `static` variable `iRev` to construct the reversed number digit by digit.
  * **How to Compile and Run**:
    ```bash
    gcc Question5.c -o Question5
    ./Question5
    ```

-----