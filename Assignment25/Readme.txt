# C String Manipulation Programs

This repository contains several C programs demonstrating basic string manipulation operations. Each program is designed to perform a specific task on a user-provided string.

## Programs Included:

### 1. `Question1.c` - Convert to Lowercase

* **Description**: This program converts all uppercase characters in an input string to lowercase.
* **Function**: `void strlwrX(char *str)`
* **Usage**:
    ```bash
    Enter string : 
    Hello World
    Updated string : hello world
    ```

### 2. `Question2.c` - Convert to Uppercase

* **Description**: This program converts all lowercase characters in an input string to uppercase.
* **Function**: `void strlwrX(char *str)` (Note: The function name is `strlwrX` but its functionality is to convert to uppercase.)
* **Usage**:
    ```bash
    Enter string : 
    Hello World
    Updated string : HELLO WORLD
    ```

### 3. `Question3.c` - Toggle Case

* **Description**: This program toggles the case of each alphabetic character in an input string. Uppercase characters are converted to lowercase, and lowercase characters are converted to uppercase.
* **Function**: `void strtoggleX(char *str)`
* **Usage**:
    ```bash
    Enter string : 
    Hello World
    Updated string : hELLO wORLD
    ```

### 4. `Question4.c` - Display Digits

* **Description**: This program reads a string and displays only the digit characters present in it.
* **Function**: `void DisplayDigit(char *str)`
* **Usage**:
    ```bash
    Enter string: abc123def456
    123456
    ```

### 5. `Question5.c` - Count White Spaces

* **Description**: This program counts the number of whitespace characters in an input string.
* **Function**: `int CountWhite(char *str)`
* **Usage**:
    ```bash
    Enter string : 
    Hello   World
    Number of white spaces are : 3
    ```

## How to Compile and Run:

To compile any of these programs, use a C compiler like GCC. For example:

```bash
gcc Question1.c -o Question1
./Question1
```

Replace `Question1.c` and `Question1` with the respective filename for other programs.
```