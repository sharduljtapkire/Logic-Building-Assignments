### Java String Pattern Programs

This repository contains five distinct Java programs that generate various string patterns. Each program prompts the user to enter a string and then prints a unique pattern based on that input.

-----

### **Getting Started**

#### **Prerequisites**

You must have the **Java Development Kit (JDK)** installed to compile and run these programs.

#### **How to Compile and Run**

1.  Open your terminal or command prompt and navigate to the directory where the Java files are saved.
2.  To compile a specific program (e.g., `Question1.java`), use the `javac` command:
    ```bash
    javac Question1.java
    ```
3.  To run the compiled program, use the `java` command followed by the class name:
    ```bash
    java Question1
    ```
4.  The program will then prompt you to "Enter String : ". After entering your string, the pattern will be displayed.

-----

### **Program Descriptions**

#### **1. Question1.java**

This program generates a right-angled triangular pattern. Each line prints a substring of the input string, starting with the first character and adding one character in each subsequent line. The remaining spaces in each row are filled with asterisks (`*`).

  * **Example Input**: `MARVELLOUS`
  * **Output**:
    ```
    M   * * * * * * * * *
    M   A   * * * * * * * *
    M   A   R   * * * * * * *
    M   A   R   V   * * * * * *
    M   A   R   V   E   * * * * *
    M   A   R   V   E   L   * * * *
    M   A   R   V   E   L   L   * * *
    M   A   R   V   E   L   L   O   * *
    M   A   R   V   E   L   L   O   U   *
    M   A   R   V   E   L   L   O   U   S
    ```

#### **2. Question2.java**

This program prints an inverted triangular pattern. Each row contains a decreasing substring of the original string, starting with the full string and reducing by one character per line. The remaining spaces in each row are filled with asterisks (`*`).

  * **Example Input**: `MARVELLOUS`
  * **Output**:
    ```
    M   A   R   V   E   L   L   O   U   S
    M   A   R   V   E   L   L   O   U   *
    M   A   R   V   E   L   L   O   * *
    M   A   R   V   E   L   L   * * *
    M   A   R   V   E   L   * * * *
    M   A   R   V   E   * * * * *
    M   A   R   V   * * * * * *
    M   A   R   * * * * * * *
    M   A   * * * * * * * *
    M   * * * * * * * * *
    ```

#### **3. Question3.java**

This program generates a right-angled triangular pattern similar to `Question1.java`, but the empty spaces are filled with pound signs (`#`) instead of asterisks.

  * **Example Input**: `MARVELLOUS`
  * **Output**:
    ```
    M   #   #   #   #   #   #   #   #   #
    M   A   #   #   #   #   #   #   #   #
    M   A   R   #   #   #   #   #   #   #
    M   A   R   V   #   #   #   #   #   #
    M   A   R   V   E   #   #   #   #   #
    M   A   R   V   E   L   #   #   #   #
    M   A   R   V   E   L   L   #   #   #
    M   A   R   V   E   L   L   O   #   #
    M   A   R   V   E   L   L   O   U   #
    M   A   R   V   E   L   L   O   U   S
    ```

#### **4. Question4.java**

This program generates a diamond-like pattern by combining an inverted triangle (like in `Question2.java`) with a second inverted triangle that mirrors the first one, creating a symmetrical shape.

  * **Example Input**: `MARVELLOUS`
  * **Output**:
    ```
    M   A   R   V   E   L   L   O   U   S
    M   A   R   V   E   L   L   O   U   *
    M   A   R   V   E   L   L   O   * *
    M   A   R   V   E   L   L   * * *
    M   A   R   V   E   L   * * * *
    M   A   R   V   E   * * * * *
    M   A   R   V   * * * * * *
    M   A   R   * * * * * * *
    M   A   * * * * * * * *
    M   * * * * * * * * *
    M   A   * * * * * * * *
    M   A   R   * * * * * * *
    M   A   R   V   * * * * * *
    M   A   R   V   E   * * * * *
    M   A   R   V   E   L   * * * *
    M   A   R   V   E   L   L   * * *
    M   A   R   V   E   L   L   O   * *
    M   A   R   V   E   L   L   O   U   *
    ```

#### **5. Question5.java**

This program creates a symmetrical diamond pattern by first printing a right-angled triangle (like in `Question3.java`) and then an inverted triangle that mirrors it. The empty spaces in the pattern are filled with pound signs (`#`).

  * **Example Input**: `MARVELLOUS`
  * **Output**:
    ```
    M   #   #   #   #   #   #   #   #   #
    M   A   #   #   #   #   #   #   #   #
    M   A   R   #   #   #   #   #   #   #
    M   A   R   V   #   #   #   #   #   #
    M   A   R   V   E   #   #   #   #   #
    M   A   R   V   E   L   #   #   #   #
    M   A   R   V   E   L   L   #   #   #
    M   A   R   V   E   L   L   O   #   #
    M   A   R   V   E   L   L   O   U   #
    M   A   R   V   E   L   L   O   U   S
    M   A   R   V   E   L   L   O   U   #
    M   A   R   V   E   L   L   O   #   #
    M   A   R   V   E   L   L   #   #   #
    M   A   R   V   E   L   #   #   #   #
    M   A   R   V   E   #   #   #   #   #
    M   A   R   V   #   #   #   #   #   #
    M   A   R   #   #   #   #   #   #   #
    M   A   #   #   #   #   #   #   #   #
    M   #   #   #   #   #   #   #   #   #
    ```