The five C programs you provided demonstrate basic array manipulation and conditional logic, common in introductory C programming.
 Here's a README-style summary of each:

### Program 1: `Question1.c`

This program calculates the difference between the sum of even elements and the sum of odd elements in an array.

* **Function:** `Difference(int Arr[], int iSize)`
    * Takes an integer array `Arr` and its size `iSize` as input.
    * Iterates through the array, summing even numbers into `iSumEven` and odd numbers into `iSumOdd`.
    * Returns `iSumEven - iSumOdd`.
* **Main Function:**
    * Prompts the user to enter the number of elements.
    * Dynamically allocates memory for the array using `malloc`.
    * Handles potential memory allocation failure.
    * Prompts the user to enter the elements.
    * Calls `Difference` to get the result.
    * Prints the result.
    * Frees the dynamically allocated memory using `free`.

### Program 2: `Question2.c`

This program displays all elements in an array that are divisible by 5.

* **Function:** `Display(int Arr[], int iSize)`
    * Takes an integer array `Arr` and its size `iSize` as input.
    * Iterates through the array.
    * If an element is divisible by 5 (i.e., `Arr[iCnt] % 5 == 0`), it prints the element.
* **Main Function:**
    * Similar structure to `Question1.c` for input, memory allocation, and freeing memory.
    * Calls `Display` to print the relevant elements.

### Program 3: `Question3.c`

This program displays all elements in an array that are divisible by both 5 and 2 (i.e., even numbers & divisible by 5).

* **Function:** `Display(int Arr[], int iSize)`
    * Takes an integer array `Arr` and its size `iSize` as input.
    * Iterates through the array.
    * If an element is divisible by both 5 and 2 (i.e., `(Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0)`), it prints the element.
* **Main Function:**
    * Similar structure to the previous programs for input, memory allocation, and freeing memory.
    * Calls `Display` to print the relevant elements.

### Program 4: `Question4.c`

This program displays all elements in an array that are divisible by both 5 and 3.

* **Function:** `Display(int Arr[], int iSize)`
    * Takes an integer array `Arr` and its size `iSize` as input.
    * Iterates through the array.
    * If an element is divisible by both 5 and 3 (i.e., `(Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0)`), it prints the element.
* **Main Function:**
    * Similar structure to the previous programs for input, memory allocation, and freeing memory.
    * Calls `Display` to print the relevant elements.

### Program 5: `Question5.c`

This program displays all elements in an array that are multiples of 11.

* **Function:** `Display(int Arr[], int iSize)`
    * Takes an integer array `Arr` and its size `iSize` as input.
    * Iterates through the array.
    * If an element is a multiple of 11 (i.e., `Arr[iCnt] % 11 == 0`), it prints the element.
* **Main Function:**
    * Similar structure to the previous programs for input, memory allocation, and freeing memory.
    * Calls `Display` to print the relevant elements.