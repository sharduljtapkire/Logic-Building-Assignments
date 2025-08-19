### Java String Pattern Programs

This repository contains five Java programs that generate various string patterns based on user input. Each program takes a string from the user and then prints a unique pattern using the characters of that string.

-----

### Getting Started

#### Prerequisites

  * **Java Development Kit (JDK)**: You must have the JDK installed on your system to compile and run these programs.

#### How to Compile and Run

1.  Open your command line or terminal.
2.  Navigate to the directory where you have saved the `.java` files.
3.  To compile a specific program (e.g., `Question1.java`), use the `javac` command:
    ```bash
    javac Question1.java
    ```
4.  To run the compiled program, use the `java` command followed by the class name:
    ```bash
    java Question1
    ```
5.  The program will prompt you to enter a string. The generated pattern will be displayed based on your input.

-----

### Program Descriptions

#### **1. Question1.java**

This program prints a rectangular pattern where each row is the complete input string. The pattern has as many rows as the length of the string.

  * **Example Input**: `ABCD`
  * **Output**:
    ```
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
    ```

#### **2. Question2.java**

This program generates a right-aligned triangular pattern where each row is a decreasing substring of the original string. The pattern starts with the full string and reduces by one character in each subsequent line.

  * **Example Input**: `ABCD`
  * **Output**:
    ```
    A   B   C   D
    A   B   C
    A   B
    A
    ```

#### **3. Question3.java**

This program prints a triangular pattern where each row is an increasing substring of the input string. The pattern starts with the first character and adds one character per line until the full string is printed on the last line.

  * **Example Input**: `ABCD`
  * **Output**:
    ```
    A
    A   B
    A   B   C
    A   B   C   D
    ```

#### **4. Question4.java**

This program generates a combined pattern that first prints a decreasing triangle, followed by an increasing one. The decreasing part starts with the full string and goes down to a single character. The increasing part starts with the first two characters and goes up to the full string.

  * **Example Input**: `ABCD`
  * **Output**:
    ```
    A   B   C   D
    A   B   C
    A   B
    A
    A   B
    A   B   C
    A   B   C   D
    ```

#### **5. Question5.java**

This program prints a diamond-like pattern. It first prints an increasing triangular pattern, then a decreasing one. The decreasing pattern starts from a substring one character shorter than the full string.

  * **Example Input**: `ABCD`
  * **Output**:
    ```
    A
    A   B
    A   B   C
    A   B   C   D
    A   B   C
    A   B
    A
    ```