The `Question1.cpp` file defines two C++ classes: `Array` and `ArrSearch`.

The `Array` class is a base class that manages a dynamic array of integers.
* **Constructors:**
    * A default constructor that initializes an array of a specified size (defaulting to 10).
    * A copy constructor that creates a deep copy of an existing `Array` object.
* **Destructor:** Deallocates the dynamically allocated memory for the array.
* **Methods:**
    * `Accept()`: Prompts the user to enter elements into the array.
    * `Display()`: Prints the elements of the array.

The `ArrSearch` class publicly inherits from the `Array` class and adds functionalities for searching and analyzing 
the array elements.
* **Constructor:** Initializes the `ArrSearch` object by calling the base class `Array` constructor.
* **Methods:**
    * `Frequency(int value)`: Returns the number of times a given `value` appears in the array.
    * `SearchFirst(int value)`: Returns the position (1-based index) of the first occurrence of a given `value`. 
    Returns -1 if the value is not found.
    * `SearchLast(int value)`: Returns the position (1-based index) of the last occurrence of a given `value`. 
    Returns -1 if the value is not found.
    * `EvenCount()`: Returns the total count of even numbers in the array.
    * `OddCount()`: Returns the total count of odd numbers in the array.
    * `SumAll()`: Returns the sum of all elements in the array.

The `main` function demonstrates the usage of these classes:
1.  An `ArrSearch` object `sobj1` is created with a size of 5.
2.  The user is prompted to enter 5 integer values for the array.
3.  The entered elements are displayed.
4.  The `SearchLast()` method is called to find the last occurrence of the number 11, and the result is printed.
5.  The `EvenCount()` method is called to count even numbers, and the result is printed.
6.  The `OddCount()` method is called to count odd numbers, and the result is printed.
7.  The `SumAll()` method is called to calculate the sum of all elements, and the result is printed.