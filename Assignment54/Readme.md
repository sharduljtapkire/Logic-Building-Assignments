# Java Programs Repository 💻

This repository contains a collection of four Java programs, each demonstrating a different operation on an array. The programs are organized into separate files for clarity and can be compiled and run individually.

-----

### **Question 1: Reverse Elements of an Integer Array**

This program takes an array of integers and reverses each individual number within the array.

  - **File:** `Question1.java`
  - **Functionality:** Prompts the user to enter the size and elements of an integer array. It then iterates through the array, reverses the digits of each number, and replaces the original number with its reversed value. Finally, it prints the modified array.
  - **Class:** `MyArray` with a method `ReverseArray` that handles the reversal logic.

-----

### **Question 2: Sum of Digits for Each Element**

This program takes an array of integers and replaces each element with the sum of its digits.

  - **File:** `Question2.java`
  - **Functionality:** Reads an integer array from the user, then processes each number to calculate the sum of its digits. The original number in the array is then replaced by this sum. The program concludes by displaying the updated array.
  - **Class:** `MyArray` with a method `SumArray` that performs the digit summation.

-----

### **Question 3: Count Capital Characters in a String**

This program counts the number of uppercase characters in a user-provided string.

  - **File:** `Question3.java`
  - **Functionality:** Asks the user to enter a string, which is then converted into a character array. The program iterates through this array and counts every character that is an uppercase letter ('A' to 'Z'). The final count is printed to the console.
  - **Class:** `MyArray` with a method `ArrayCapital` that returns the count of capital letters.

-----

### **Question 4: Student Mark Sheet**

This program evaluates and categorizes student marks based on a predefined grading system.

  - **File:** `Question4.java`
  - **Functionality:** Prompts the user to enter the number of students and their marks. It then iterates through the marks and prints each mark along with its corresponding grade (e.g., Fail, Pass class, Second class, First class, or First class with Distinction).
  - **Class:** `MyArray` with a method `Percentage` that handles the evaluation and printing of grades.

-----

### **How to Compile and Run a Program**

1.  **Save:** Save the desired `.java` file (e.g., `Question1.java`).
2.  **Compile:** Open a terminal or command prompt, navigate to the directory where the file is saved, and compile the program using the Java compiler:
    ```bash
    javac Question1.java
    ```
3.  **Run:** After successful compilation, run the program using the Java interpreter:
    ```bash
    java Question1
    ```
    The program will then prompt you to enter the necessary input.