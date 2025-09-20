## Program Descriptions 💻

This repository contains a collection of five Java programs, each demonstrating different operations on two integer arrays. Each program is encapsulated within a separate `.java` file.

### Question 1: Display Elements

This program takes two integer arrays as input from the user and displays all the elements of both arrays.

  - **File:** `Question1.java`
  - **Functionality:** Reads the size and elements for two arrays, then prints all elements from each array.
  - **Class:** `MyArray` with a `Display` method.

-----

### Question 2: Display Even Elements

This program takes two integer arrays and displays only the even numbers from each.

  - **File:** `Question2.java`
  - **Functionality:** Reads two arrays and iterates through each to find and print only the elements that are divisible by 2.
  - **Class:** `MyArray` with a `DisplayEven` method.

-----

### Question 3: Display Odd Elements

This program takes two integer arrays and displays only the odd numbers from each.

  - **File:** `Question3.java`
  - **Functionality:** Reads two arrays and iterates through each to find and print only the elements that are not divisible by 2.
  - **Class:** `MyArray` with a `DisplayOdd` method.

-----

### Question 4: Concatenate Arrays

This program combines two integer arrays into a single, new array.

  - **File:** `Question4.java`
  - **Functionality:** Reads two arrays, creates a new array with a size equal to the sum of the two input arrays' sizes, and then copies the elements from the first array followed by the second array into the new array.
  - **Class:** `MyArray` with an `ArrayConcat` method that returns a new array.

-----

### Question 5: Sum of Elements

This program calculates and displays the sum of all elements for each of the two input arrays separately.

  - **File:** `Question5.java`
  - **Functionality:** Reads two arrays and calculates the sum of elements for each, then prints the two separate sums.
  - **Class:** `MyArray` with a `SumArray` method.

-----

### How to Run a Program

1.  **Save:** Save the desired `.java` file (e.g., `Question1.java`).
2.  **Compile:** Open a terminal or command prompt, navigate to the file's directory, and compile the program using the Java compiler:
    ```bash
    javac Question1.java
    ```
3.  **Run:** After successful compilation, run the program:
    ```bash
    java Question1
    ```
    The program will then prompt you to enter the size and elements for the arrays.