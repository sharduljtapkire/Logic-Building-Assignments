ReadMe

**Question1.c**
* **Description**: This program takes an array of integers as input from the user, dynamically allocates memory for it, and then finds and prints the maximum number among the entered elements.
* **Function**: `Maximum(int Arr[], int iLength)`
    * Takes an integer array `Arr` and its `iLength` as input.
    * Initializes `iMax` with the first element of the array.
    * Iterates through the array starting from the second element.
    * If any element is greater than `iMax`, `iMax` is updated.
    * Returns the final `iMax` value.
* **Main Function**:
    * Prompts the user to enter the number of elements.
    * Allocates memory for the integer array using `malloc`. Handles memory allocation failure.
    * Prompts the user to enter each element of the array.
    * Calls the `Maximum` function to get the largest number.
    * Prints the largest number.
    * Frees the allocated memory using `free`.

**Question2.c**
* **Description**: This program takes an array of integers as input from the user, dynamically allocates memory for it, and then finds and prints the minimum number among the entered elements.
* **Function**: `Minimum(int Arr[], int iLength)`
    * Takes an integer array `Arr` and its `iLength` as input.
    * Initializes `iMin` with the first element of the array.
    * Iterates through the array starting from the second element.
    * If any element is smaller than `iMin`, `iMin` is updated.
    * Returns the final `iMin` value.
* **Main Function**:
    * Prompts the user to enter the number of elements.
    * Allocates memory for the integer array using `malloc`. Handles memory allocation failure.
    * Prompts the user to enter each element of the array.
    * Calls the `Minimum` function to get the smallest number.
    * Prints the smallest number.
    * Frees the allocated memory using `free`.

**Question3.c**
* **Description**: This program takes an array of integers as input, dynamically allocates memory, and then calculates and prints the difference between the largest and smallest numbers in the array.
* **Function**: `Difference(int Arr[], int iLength)`
    * Takes an integer array `Arr` and its `iLength` as input.
    * Initializes `iMax` and `iMin` with the first element of the array.
    * Iterates through the array starting from the second element.
    * If an element is greater than `iMax`, `iMax` is updated.
    * Else if an element is less than `iMin`, `iMin` is updated.
    * Returns the difference `iMax - iMin`.
* **Main Function**:
    * Prompts the user to enter the number of elements.
    * Allocates memory for the integer array using `malloc`. Handles memory allocation failure.
    * Prompts the user to enter each element of the array.
    * Calls the `Difference` function to get the difference.
    * Prints the difference between the largest and smallest numbers.
    * Frees the allocated memory using `free`.

**Question4.c**
* **Description**: This program takes an array of integers as input, dynamically allocates memory, and then prints all the numbers from the array that have exactly three digits (e.g., 100 to 999 or -100 to -999).
* **Function**: `Digits(int Arr[], int iLength)`
    * Takes an integer array `Arr` and its `iLength` as input.
    * Iterates through each element of the array.
    * For each number, it checks if it falls within the range of 100 to 999 (inclusive) or -100 to -999 (inclusive).
    * If the condition is met, the number is printed.
    * Prints a newline character at the end.
* **Main Function**:
    * Prompts the user to enter the number of elements.
    * Allocates memory for the integer array using `malloc`. Handles memory allocation failure.
    * Prompts the user to enter each element of the array.
    * Prints a message indicating what will be displayed.
    * Calls the `Digits` function to print numbers with exactly 3 digits.
    * Frees the allocated memory using `free`.

**Question5.c**
* **Description**: This program takes an array of integers as input, dynamically allocates memory, and then calculates and prints the sum of the digits for each number in the array.
* **Function**: `DigitsSum(int Arr[], int iLength)`
    * Takes an integer array `Arr` and its `iLength` as input.
    * Iterates through each element of the array.
    * For each number, it converts negative numbers to positive for digit sum calculation.
    * Uses a `while` loop to extract digits using the modulo operator (`% 10`) and sum them up.
    * Divides the number by 10 (`/ 10`) in each iteration to process the next digit.
    * Prints the sum of digits for each number.
    * Prints a newline character at the end.
* **Main Function**:
    * Prompts the user to enter the number of elements.
    * Allocates memory for the integer array using `malloc`. Handles memory allocation failure.
    * Prompts the user to enter each element of the array.
    * Calls the `DigitsSum` function to calculate and print the sum of digits for each element.
    * Frees the allocated memory using `free`.