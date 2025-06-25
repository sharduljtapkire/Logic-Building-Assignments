## README

This repository contains five C programs, each demonstrating a specific array manipulation or search operation.

### `Question1.c`

This program prompts the user to enter the number of elements for an array and then the elements themselves. It then counts and displays the number of even elements in the array.

**Functions:**
* `CountEven(int Arr[], int iSize)`: Takes an integer array `Arr` and its size `iSize` as input, and returns the count of even numbers present in the array.

**Example Usage:**
```
Enter the number of elements : 
5
Enter the elements : 
10
23
40
55
62
Number of even elements are : 3
```

### `Question2.c`

This program is similar to `Question1.c` but focuses on odd numbers. It prompts the user for array elements and then counts and displays the number of odd elements.

**Functions:**
* `CountOdd(int Arr[], int iSize)`: Takes an integer array `Arr` and its size `iSize` as input, and returns the count of odd numbers present in the array.

**Example Usage:**
```
Enter the number of elements : 
5
Enter the elements : 
10
23
40
55
62
Number of odd elements are : 2
```

### `Question3.c`

This program takes an array of integers as input from the user and checks if the number 11 is present in the array. It then prints whether 11 is present or not.

**Functions:**
* `Check(int Arr[], int iSize)`: Takes an integer array `Arr` and its size `iSize` as input. It searches for the value 11 in the array and returns `true` if found, otherwise `false`. (Note: The `main` function calls `Search` but the defined function is `Check`. It is assumed that `Search` should be `Check`).

**Example Usage:**
```
Enter the number of elements : 
4
Enter the elements : 
1
2
11
4
11 is present
```
```
Enter the number of elements : 
3
Enter the elements : 
10
20
30
11 is not present
```

### `Question4.c`

This program takes an array of integers as input and calculates the frequency of the number 11 in the array.

**Functions:**
* `Frequency(int Arr[], int iSize)`: Takes an integer array `Arr` and its size `iSize` as input, and returns the number of times the value 11 appears in the array.

**Example Usage:**
```
Enter the number of elements : 
6
Enter the elements : 
11
22
11
33
11
44
The frequency of 11 in the array is: 3
```

### `Question5.c`

This program is a more generalized version of `Question4.c`. It prompts the user for array elements and then asks for a specific number to find its frequency within the array.

**Functions:**
* `Frequency(int Arr[], int iSize, int iNo)`: Takes an integer array `Arr`, its size `iSize`, and an integer `iNo` (the number to search for) as input. It returns the number of times `iNo` appears in the array.

**Example Usage:**
```
Enter the number of elements : 
7
Enter the elements : 
1
2
3
2
4
2
5
Enter the number to find its frequency : 
2
The frequency of 2 in the array is: 3
```