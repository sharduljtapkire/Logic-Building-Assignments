This repository contains several C++ programs demonstrating the use of function templates. 
Templates allow you to write generic functions and classes that can operate with different 
data types without rewriting the entire code for each type.

## Files

  * **`Question1.cpp`**

      * **Description:** This file defines a function template `Multiply` 
      that takes two arguments of the same type and returns their product.
      * **Demonstrates:** Basic function template for a simple arithmetic operation.
      * **Example Usage:** Multiplies two integers and two floats.

  * **`Question2.cpp`**

      * **Description:** This file defines a function template `Max` 
      that takes three arguments of the same type and returns the largest among them.
      * **Demonstrates:** Function template for comparing and finding the maximum of multiple values.
      * **Example Usage:** Finds the maximum of three integers and three floats.

  * **`Question3.cpp`**

      * **Description:** This file defines a function template `AddN` 
      that takes an array of any type and its size, then returns the sum of all elements in the array.
      * **Demonstrates:** Function template for performing an operation on elements of an array of generic type.
      * **Example Usage:** Calculates the sum of elements in an integer array and a float array.

  * **`Question4.cpp`**

      * **Description:** This file defines a function template `Max` 
      that takes an array of any type and its size, then returns the maximum element in the array.
      * **Demonstrates:** Function template for finding the maximum element within an array of generic type.
      * **Example Usage:** Finds the maximum element in an integer array and a float array.

  * **`Question5.cpp`**

      * **Description:** This file defines a function template `Min` 
      that takes an array of any type and its size, then returns the minimum element in the array.
      * **Demonstrates:** Function template for finding the minimum element within an array of generic type.
      * **Example Usage:** Finds the minimum element in an integer array and a float array.

## How to Compile and Run

To compile and run these programs, you'll need a C++ compiler (like g++).

1.  **Compile:**

    ```bash
    g++ -o Question1 Question1.cpp
    g++ -o Question2 Question2.cpp
    g++ -o Question3 Question3.cpp
    g++ -o Question4 Question4.cpp
    g++ -o Question5 Question5.cpp
    ```

2.  **Run:**

    ```bash
    ./Question1
    ./Question2
    ./Question3
    ./Question4
    ./Question5
    ```

Each program will print its respective output to the console, 
demonstrating the functionality of the templates with different data types.