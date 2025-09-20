## Java Array Operations

This repository contains a set of Java programs that demonstrate various operations on arrays. Each program is designed to perform a specific task, such as case conversion, character counting, and pattern generation.

### Files

  * **`Question1.java`**: This program takes a character array as input and converts all capital letters to their lowercase equivalents. The converted array is then printed to the console.
  * **`Question2.java`**: This program is similar to `Question1.java` but performs the opposite conversion. It takes a character array and converts all lowercase letters to their uppercase equivalents.
  * **`Question3.java`**: This program counts the occurrences of a specific character in a given array. The search is case-insensitive, meaning it will count both the uppercase and lowercase versions of the character.
  * **`Question4.java`**: This program calculates the difference between the number of capital letters and the number of small letters in a character array.
  * **`Question5.java`**: This program takes an integer array as input. For each element in the array, it prints a number of asterisks (`*`) equal to the value of the element, creating a simple pattern.

### Getting Started

1.  **Clone the repository:**

    ```bash
    git clone <repository_url>
    ```

2.  **Navigate to the project directory:**

    ```bash
    cd <project_directory>
    ```

3.  **Compile the Java files:**

    ```bash
    javac *.java
    ```

4.  **Run the desired program:**

    ```bash
    java Question1
    java Question2
    java Question3
    java Question4
    java Question5
    ```

### Example Usage

Here is an example of how to run `Question4.java` and its expected output:

```
$ java Question4
Enter number of characters : 
5
Enter the characters : 
A
b
C
d
E
Difference between frequency of capital and small letters is : 1
```