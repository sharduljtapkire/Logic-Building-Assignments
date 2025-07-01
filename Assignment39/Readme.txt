The provided C++ files demonstrate several generic functions implemented using templates, allowing them to operate on different data types.

Here's a breakdown of each file:

* **`Question1.cpp`**
    * This file contains a templated function `Display` that takes a value of any data type (`T`) and an integer `iSize`.
    * It prints the `value` `iSize` times, followed by a newline.
    * The `main` function demonstrates its usage with a character ('M'), an integer (11), and a double (3.7).

* **`Question2.cpp`**
    * This file implements a templated function `Frequency` that counts the occurrences of a specific element `iNo` within an array `arr` of size `iSize`.
    * The `main` function initializes an integer array `arr` and calls `Frequency` to find the count of `10` in the array, then prints the result.

* **`question3.cpp`**
    * This file includes a templated function `SearchFirst` which searches for the first occurrence of an element `iNo` in an array `arr` of size `iSize`.
    * It returns the index of the first occurrence if found, otherwise, it returns -1.
    * The `main` function demonstrates searching for the first occurrence of `40` in an integer array.

* **`Question4.cpp`**
    * This file defines a templated function `SearchLast` that finds the last occurrence of an element `iNo` in an array `arr` of size `iSize`.
    * It returns the index of the last occurrence, or -1 if the element is not found.
    * The `main` function showcases its use by searching for the last occurrence of `40` in an integer array.

* **`Question5.cpp`**
    * This file provides a templated function `Reverse` that reverses the elements of an array `arr` of size `iSize` in-place.
    * The `main` function initializes an integer array, prints its original state, calls `Reverse` to reverse it, and then prints the reversed array.