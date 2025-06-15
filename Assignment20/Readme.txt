**Readme File**

This repository contains five C programs, each demonstrating a different array manipulation or searching technique.

---

### `Question1.c` - Check Presence of an Element

**Description:**
This program checks if a given number is present in an array.

**Functionality:**
* It prompts the user to enter the number of elements for the array.
* It dynamically allocates memory for the array.
* It then takes the array elements as input from the user.
* Finally, it asks for a specific number and calls the `CheckPresence` function to determine if the number exists in the array.
* It prints "true" if the number is found, and "false" otherwise.

**How to Compile and Run:**
```bash
gcc Question1.c -o Question1
./Question1
```

---

### `Question2.c` - Find First Occurrence of an Element

**Description:**
This program finds the index of the first occurrence of a specified number in an array.

**Functionality:**
* It prompts the user to enter the number of elements for the array.
* It dynamically allocates memory for the array.
* It takes the array elements as input.
* It then asks for a number to find its first occurrence and calls the `FirstOcc` function.
* If the number is found, it prints the index of its first occurrence; otherwise, it indicates that the number is not present.

**How to Compile and Run:**
```bash
gcc Question2.c -o Question2
./Question2
```

---

### `Question3.c` - Find Last Occurrence of an Element

**Description:**
This program finds the index of the last occurrence of a specified number in an array.

**Functionality:**
* It prompts the user to enter the number of elements for the array.
* It dynamically allocates memory for the array.
* It takes the array elements as input.
* It then asks for a number to find its last occurrence and calls the `LastOcc` function.
* If the number is found, it prints the index of its last occurrence; otherwise, it indicates that the number is not present.

**How to Compile and Run:**
```bash
gcc Question3.c -o Question3
./Question3
```

---

### `Question4.c` - Display Elements within a Range

**Description:**
This program displays all elements in an array that fall within a specified numerical range (inclusive).

**Functionality:**
* It prompts the user to enter the number of elements for the array.
* It dynamically allocates memory for the array.
* It takes the array elements as input.
* It then asks for a start and end value for the range and calls the `Range` function to print the elements within that range.

**How to Compile and Run:**
```bash
gcc Question4.c -o Question4
./Question4
```

---

### `Question5.c` - Product of Odd Elements

**Description:**
This program calculates the product of all odd numbers present in an array.

**Functionality:**
* It prompts the user to enter the number of elements for the array.
* It dynamically allocates memory for the array.
* It takes the array elements as input.
* It then calls the `Product` function, which iterates through the array and calculates the product of all odd numbers.
* The result (product of odd numbers) is then printed.

**How to Compile and Run:**
```bash
gcc Question5.c -o Question5
./Question5
```