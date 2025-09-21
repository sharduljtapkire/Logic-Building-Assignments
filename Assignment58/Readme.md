# Java Code Examples

This repository contains five simple Java programs, each demonstrating a different fundamental programming concept. Below is a brief description of each program and its functionality.

---

## Question 1: Alphabetical Pyramid Pattern

This program generates a pyramid pattern of letters. When you run the `Question1.java` file, it prompts you to enter a number. Based on this number, it creates a pyramid where each row starts with 'A' and extends outward with consecutive letters, then contracts. 
### How it Works
The `Pattern2` class contains the logic. It uses a series of nested `for` loops to control the spaces and characters printed on each line, forming the pyramid shape. The `main` method in `Question1` creates an instance of `Pattern2`, takes user input, and calls the method to print the pattern.

---

## Question 2: Anagram Checker

This program checks if two strings are **anagrams** of each other. Anagrams are words or phrases formed by rearranging the letters of another. The `Question2.java` file will ask you to input two strings and then tell you if they are anagrams.

### How it Works
The `AnagramString` class has a method `isAnagrams` that cleans the input strings by removing spaces and converting them to lowercase. It then converts both strings into character arrays, sorts them alphabetically, and compares the sorted arrays. If the sorted arrays are identical, the original strings are anagrams.

---

## Question 3: Reverse Each Word in a String

This program takes a string and reverses each word within it, while keeping the original word order. For example, if you input "hello world," the output will be "olleh dlrow."

### How it Works
The `ReverseEachWord` class contains the `reverseWord` method. This method first splits the input string into an array of words. It then iterates through each word, reverses it character by character, and appends the reversed word to a new string. Finally, it returns the newly formed string with all words reversed.

---

## Question 4: Add Distances

This program demonstrates object-oriented programming by adding two distances represented in feet and inches. When you run `Question4.java`, it prompts you to enter the feet and inches for two separate distances and then calculates and displays their sum.

### How it Works
The `Distance` class represents a distance with `feet` and `inches` attributes. The `addDistances` method takes another `Distance` object as input, sums the feet and inches separately, and correctly carries over excess inches (12 inches = 1 foot) to the feet total. The result is returned as a new `Distance` object.

---

## Question 5: Transpose a Matrix

This program calculates the **transpose** of a matrix. A transpose is a new matrix where the rows of the original matrix become the columns of the new one. The `TransposeMatrix.java` file will ask for the dimensions of a matrix (rows and columns) and its elements, then display both the original and transposed matrices.

### How it Works
The program first creates a 2D array to store the original matrix based on user input. It then creates a new 2D array for the transposed matrix, but with the rows and columns swapped. It populates the new matrix by iterating through the original and assigning `transpose[j][i] = original[i][j]`, effectively flipping the rows and columns.