````
README

This directory contains fifteen C programs.  There are multiple sets of programs with similar names, each set addressing different problems.

**Set 1:** (Files: Question1.c, Question2.c, Question3.c, Question4.c, Question5.c)

* **Question1.c:** Calculates the area of a circle given its radius.
* **Question2.c:** Calculates the area of a rectangle given its width and height.
* **Question3.c:** Converts a distance from kilometers to meters.
* **Question4.c:** Converts a temperature from Fahrenheit to Celsius.
* **Question5.c:** Converts an area from square feet to square meters.

**Set 2:** (Files: Question1.c, Question2.c, Question3.c, Question4.c, Question5.c)

* **Question1.c:** Takes a number as input and prints a series of '*' and '#' symbols, the count of each being equal to the input number.
* **Question2.c:** Converts a given amount from US dollars to Indian Rupees (INR), using a fixed exchange rate.
* **Question3.c:** Calculates the factorial of the even digits of a given number.
* **Question4.c:** Calculates the factorial of the odd digits of a given number.
* **Question5.c:** Calculates the difference between the factorial of the even digits and the factorial of the odd digits of a given number.  Handles negative input by using its absolute value.

**Set 3:** (Files: Question1.c, Question2.c, Question3.c, Question4.c)

* **Question1.c:** Takes an integer as input and:
    * Prints "Small" if the number is less than 50.
    * Prints "Medium" if the number is between 50 (exclusive) and 100 (exclusive).
    * Prints "Large" if the number is greater than or equal to 100.
* **Question2.c:** Calculates the factorial of a given integer.  Returns "Invalid input" if the input is negative.
* **Question3.c:** Prints the multiplication table of a given number from 1 to 10.
* **Question4.c:** Prints the multiplication table of a given number in reverse order, from 10 down to 1.

**How to compile and run the programs:**

1.  **Compilation:**
    Use a C compiler (like GCC) to compile the programs.  For example:

    ```bash
    gcc Question1.c -o Myexe
    ```

    Repeat this command for each `.c` file, ensuring to change the output filename (`-o`) for each.

2.  **Execution:**
    Run the compiled programs from the command line:

    ```bash
    Myexe.exe
    ```

    The program will then prompt for any necessary input.
````