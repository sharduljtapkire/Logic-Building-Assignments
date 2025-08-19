## Java Pattern Printing Programs 📝

This repository contains five different Java programs that generate various character and number patterns based on user-defined rows and columns. Each program is a standalone file that can be compiled and run independently.

-----

### ⚙️ How to Compile and Run

1.  **Prerequisites**: Make sure you have the Java Development Kit (JDK) installed on your system.
2.  **Navigate**: Open your terminal or command prompt and go to the directory where the Java files are saved.
3.  **Compile**: Use the `javac` command to compile the desired `.java` file. For example, to compile `Question1.java`, run:
    ```bash
    javac Question1.java
    ```
4.  **Run**: After successful compilation, run the program using the `java` command followed by the class name (which is the same as the file name, without the `.java` extension). For example:
    ```bash
    java Question1
    ```
5.  **Input**: The program will prompt you to enter the number of rows and columns. Enter the values and press Enter to see the generated pattern.

-----

### 📁 Program Descriptions

#### **1. Question1.java**

This program prints a pattern where each row consists of an alphabetical sequence starting from 'A'.
**Example for 4 rows and 5 columns:**

```
A   B   C   D   E
A   B   C   D   E
A   B   C   D   E
A   B   C   D   E
```

#### **2. Question2.java**

This program prints a pattern that alternates between uppercase and lowercase alphabetical sequences for each row. Even-numbered rows will have lowercase letters, and odd-numbered rows will have uppercase letters.
**Example for 4 rows and 5 columns:**

```
A   B   C   D   E
a   b   c   d   e
A   B   C   D   E
a   b   c   d   e
```

#### **3. Question3.java**

This program prints a pattern where each row is filled with the same uppercase letter. The letter changes sequentially for each new row.
**Example for 4 rows and 5 columns:**

```
A   A   A   A   A
B   B   B   B   B
C   C   C   C   C
D   D   D   D   D
```

#### **4. Question4.java**

This program prints a pattern where each row is filled with a decreasing number, starting from the number of rows and going down to 1. The number is constant across each row.
**Example for 4 rows and 5 columns:**

```
4   4   4   4   4
3   3   3   3   3
2   2   2   2   2
1   1   1   1   1
```

#### **5. Question5.java**

This program prints a pattern of consecutive numbers. The numbers are incremented for each position across all rows and columns.
**Example for 4 rows and 5 columns:**

```
1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
```