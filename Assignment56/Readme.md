## Java String Programs

This repository contains a collection of Java programs that perform various operations on strings. Each program demonstrates a different string manipulation technique or algorithm.

### Files

  * **`Question1.java`**: Checks if one string is a rotation of another. It concatenates the first string with itself and then checks if the second string is a substring of the result. \* **`Question2.java`**: Counts and displays the frequency of each word in a given string. It uses a `HashMap` to store each word and its corresponding count.
  * **`Question3.java`**: Finds and returns the most frequently occurring word in a string. It iterates through the words, uses a `HashMap` to track frequencies, and identifies the word with the highest count.
  * **`Question4.java`**: Removes all occurrences of a specific character from a string. It builds a new string by iterating through the original string and excluding the specified character.
  * **`Question5.java`**: Checks if a given expression with parentheses is "balanced." It uses a `Stack` to track opening parentheses and ensures each one has a corresponding closing parenthesis in the correct order.

-----

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

-----

### Example Usage

Here is an example of how to run `Question3.java` and its expected output:

```
$ java Question3
Enter string:
Java is a programming language, and Java is widely used.
Maximum occurring word is: Java
```