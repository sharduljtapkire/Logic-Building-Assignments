This repository contains five C programs, each demonstrating different operations on character inputs.

## Programs Overview

### Question1.c

* **Description**: This program determines if a given character is an alphabet (either uppercase or lowercase).
* **Function**: `CheckAlpha(char ch)`
    * Takes a character `ch` as input.
    * Returns `true` if `ch` is an alphabet (A-Z or a-z), otherwise returns `false`.
* **Main Function**:
    * Prompts the user to enter a character.
    * Calls `CheckAlpha` to determine if the entered character is an alphabet.
    * Prints whether the character is an alphabet or not.

### Question2.c

* **Description**: This program determines if a given character is a capital letter.
* **Function**: `CheckCapital(char ch)`
    * Takes a character `ch` as input.
    * Returns `true` if `ch` is an uppercase letter (A-Z), otherwise returns `false`.
* **Main Function**:
    * Prompts the user to enter a character.
    * Calls `CheckCapital` to check if the entered character is a capital letter.
    * Prints whether the character is a capital letter or not.

### Question3.c

* **Description**: This program determines if a given character is a digit.
* **Function**: `CheckDigit(char ch)`
    * Takes a character `ch` as input.
    * Returns `true` if `ch` is a digit (0-9), otherwise returns `false`.
* **Main Function**:
    * Prompts the user to enter a character.
    * Calls `CheckDigit` to check if the entered character is a digit.
    * Prints whether the character is a digit or not.

### Question4.c

* **Description**: This program determines if a given character is a small (lowercase) letter.
* **Function**: `CheckCapital(char ch)`
    * **Note**: The function name `CheckCapital` is a misnomer; it actually checks for lowercase letters.
    * Takes a character `ch` as input.
    * Returns `true` if `ch` is a lowercase letter (a-z), otherwise returns `false`.
* **Main Function**:
    * Prompts the user to enter a character.
    * Calls `CheckCapital` (which checks for small letters) to determine if the entered character is a small letter.
    * Prints whether the character is a small letter or not.

### Question5.c

* **Description**: This program takes a division character (A, B, C, or D, case-insensitive) as input and displays the corresponding exam schedule.
* **Function**: `DisplaySchedule(char chDiv)`
    * Takes a character `chDiv` representing the division.
    * Uses a series of `if-else if` statements to check the division (case-insensitive) and print the respective exam time.
    * If an invalid division is entered, it prints an error message.
* **Main Function**:
    * Prompts the user to enter their division.
    * Calls `DisplaySchedule` with the entered division to display the exam schedule.

## How to Compile and Run

To compile and run these programs, you will need a C compiler (like GCC).

1.  **Save the files**: Save each code snippet as a `.c` file (e.g., `Question1.c`, `Question2.c`, etc.).
2.  **Open a terminal or command prompt**.
3.  **Navigate to the directory** where you saved the files.
4.  **Compile the desired program**:
    ```bash
    gcc Question1.c -o Question1
    ```
    (Replace `Question1.c` and `Question1` with the respective file name for other programs)
5.  **Run the executable**:
    ```bash
    ./Question1
    ```
    (Replace `Question1` with the name of the executable)

**Example Usage (for Question1.c):**

```bash
gcc Question1.c -o Question1
./Question1
Enter character :
M
M Is Alphabet