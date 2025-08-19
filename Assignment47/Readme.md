### Java Pattern Printing Programs

This repository contains five distinct Java programs that generate various patterns of characters and numbers. Each program prompts the user for the number of rows and columns to determine the size of the pattern.

-----

### **Getting Started**

#### **Prerequisites**

You'll need the **Java Development Kit (JDK)** installed on your system to compile and run these programs.

#### **How to Compile and Run**

1.  Open a terminal or command prompt.
2.  Navigate to the directory where you've saved the `.java` files.
3.  To compile a program, use the `javac` command. For example, to compile `Question1.java`, run:
    ```bash
    javac Question1.java
    ```
4.  To run the compiled program, use the `java` command followed by the class name (the file name without the `.java` extension). For example:
    ```bash
    java Question1
    ```
5.  The program will then prompt you to enter the number of rows and columns.

-----

### **Program Descriptions**

#### **Question 1: Asterisk Rectangle**

This program prints a simple rectangular pattern of asterisks (`*`). \* **Input**: Rows: 3, Columns: 5

  * **Output**:
    ```
    * * * * *
    * * * * *
    * * * * *
    ```

#### **Question 2: Numbered Columns**

This program prints a pattern where each row contains a sequence of numbers from 1 to the number of columns.

  * **Input**: Rows: 3, Columns: 5
  * **Output**:
    ```
    1   2   3   4   5
    1   2   3   4   5
    1   2   3   4   5
    ```

#### **Question 3: Decreasing Numbers**

This program prints a pattern where each row displays a decreasing sequence of numbers, from the number of columns down to 1.

  * **Input**: Rows: 3, Columns: 5
  * **Output**:
    ```
    5   4   3   2   1
    5   4   3   2   1
    5   4   3   2   1
    ```

#### **Question 4: Alternating Symbols**

This program generates a pattern of alternating symbols (`*` and `#`) for each column. The first column starts with `*`.

  * **Input**: Rows: 3, Columns: 5
  * **Output**:
    ```
    * #   * #   *
    * #   * #   *
    * #   * #   *
    ```

#### **Question 5: Numbered Rows**

This program prints a pattern where each row is filled with the row number.

  * **Input**: Rows: 3, Columns: 5
  * **Output**:
    ```
    1   1   1   1   1
    2   2   2   2   2
    3   3   3   3   3
    ```