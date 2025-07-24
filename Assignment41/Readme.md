# C Recursion Examples

This repository contains several C programs demonstrating the use of recursion for various output patterns. Each program takes an integer input from the user and uses a recursive function to display a sequence.

## Files

  * `Question1.c`: Displays a series of asterisks (`*`) based on the user's input.
  * `Question2.c`: Displays numbers in increasing order (1 to N) based on the user's input.
  * `Question3.c`: Displays numbers in decreasing order (N to 1) based on the user's input.
  * `Question4.c`: Displays uppercase alphabets (A to N) based on the user's input.
  * `Question5.c`: Displays lowercase alphabets (a to N) based on the user's input.

## How to Compile and Run

To compile and run these programs, you will need a C compiler (like GCC).

**1. Compile a single file (e.g., `Question1.c`):**

```bash
gcc Question1.c -o Question1
```

**2. Run the compiled executable:**

```bash
./Question1
```

**Example Walkthrough (using `Question1.c`):**

1.  **Save the code:** Save the content of `Question1.c` into a file named `Question1.c`.
2.  **Open a terminal or command prompt.**
3.  **Navigate to the directory** where you saved the file.
4.  **Compile:**
    ```bash
    gcc Question1.c -o Question1
    ```
    This command compiles `Question1.c` and creates an executable file named `Question1`.
5.  **Run:**
    ```bash
    ./Question1
    ```
    The program will then prompt you to "Enter a number:". If you enter `5`, it will output:
    ```
    * * * * *
    ```

**Repeat the compilation and execution steps for `Question2.c`, `Question3.c`, `Question4.c`, and `Question5.c` by replacing the filename accordingly.**

-----