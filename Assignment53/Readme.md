# Java Array Programs 💻

This repository contains a collection of five Java programs, each demonstrating different operations on one or two integer arrays. Each program is a separate file that can be compiled and run individually.

-----

### **Question 1: Difference Between Sum of Elements**

This program calculates and returns the difference between the sum of elements of two separate integer arrays.

  - **File:** `Question1.java`
  - **Functionality:** Takes two integer arrays as input from the user, calculates the sum of elements for each, and then returns the difference between these two sums.
  - **Class:** `MyArray` with a method `DiffArray` that performs the calculation.

-----

### **Question 2: Find Minimum Element**

This program finds and displays the minimum element from each of two integer arrays.

  - **File:** `Question2.java`
  - **Functionality:** Reads the elements for two arrays, then finds the smallest number in each array and prints it to the console.
  - **Class:** `MyArray` with a method `MinArray` that finds and prints the minimum values.

-----

### **Question 3: Copy Arrays in Reverse Order**

This program combines two integer arrays into a new array, but copies the elements in reverse order.

  - **File:** `Question3.java`
  - **Functionality:** Takes two arrays as input, creates a new array, and copies the elements of the first array in reverse order, followed by the elements of the second array, also in reverse order.
  - **Class:** `MyArray` with a method `CopyArrayRev` that returns the new, reversed array.

-----

### **Question 4: Concatenate Arrays**

This program takes two integer arrays and combines them into a single, new array.

  - **File:** `Question4.java`
  - **Functionality:** Reads two arrays, creates a new array with a size equal to the combined sizes of the input arrays, and then copies the elements from the first array followed by the second array into the new array.
  - **Class:** `MyArray` with a method `CopyArray` that returns the newly created, concatenated array.

-----

### **Question 5: Check for Palindrome Array**

This program checks whether an integer array is a **palindrome**.

  - **File:** `Question5.java`
  - **Functionality:** Takes a single integer array as input and checks if the sequence of elements reads the same forwards and backward. It prints whether the array is a palindrome or not.
  - **Class:** `MyArray` with a method `ChkPalindrome` that returns a `boolean` value (`true` or `false`).

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
    The program will then prompt you to enter the size and elements for the array(s).