The five C programs you provided demonstrate various string manipulation techniques. Here's a breakdown of each program's functionality:

**1. `Question1.c`: Count Capital Characters**

This program counts the number of capital letters in a user-entered string.

* **`CountCapital` Function:**
    * Takes a character pointer `str` as input.
    * Initializes a counter `iCount` to 0.
    * Iterates through the string until the null terminator (`\0`) is encountered.
    * Inside the loop, it checks if the current character `*str` is between 'A' and 'Z' (inclusive) using ASCII values.
    * If it's a capital letter, `iCount` is incremented.
    * Returns the final `iCount`.
* **`main` Function:**
    * Declares a character array `Arr` of size 50 to store the input string.
    * Prompts the user to "Enter string : ".
    * Uses `scanf("%[^'\n']s",Arr);` to read the string, including spaces, until a newline character is encountered.
    * Calls `CountCapital(Arr)` to get the count of capital characters.
    * Prints the result using `printf("Number of capital characters are : %d\n",iRet);`.

**2. `Question2.c`: Count Small Characters**

This program is similar to `Question1.c` but counts lowercase letters instead.

* **`CountSmall` Function:**
    * Takes a character pointer `str` as input.
    * Initializes a counter `iCount` to 0.
    * Iterates through the string.
    * Checks if the current character `*str` is between 'a' and 'z' (inclusive).
    * If it's a lowercase letter, `iCount` is incremented.
    * Returns the final `iCount`.
* **`main` Function:**
    * Similar to `Question1.c`, it gets input from the user and calls `CountSmall` to display the count of small characters.
    * **Note:** There's a slight typo in the `printf` statement within `main`; it still says "Number of capital characters are : %d\n" instead of "Number of small characters are : %d\n".

**3. `Question3.c`: Difference Between Small and Capital Characters**

This program calculates the difference between the count of lowercase and uppercase characters in a string.

* **`Difference` Function:**
    * Takes a character pointer `str` as input.
    * Initializes `smallCount` and `capitalCount` to 0.
    * Iterates through the string.
    * If the character is between 'a' and 'z', `smallCount` is incremented.
    * If the character is between 'A' and 'Z', `capitalCount` is incremented.
    * Returns `smallCount - capitalCount`.
* **`main` Function:**
    * Declares a character array `arr` of size 20.
    * Prompts the user for input.
    * Uses `scanf("%[^\n]s", arr);` to read the string.
    * Calls `Difference(arr)` and prints the returned difference.

**4. `Question4.c`: Check for Vowel**

This program checks if a string contains at least one vowel (case-insensitive).

* **`ChkVowel` Function:**
    * Takes a character pointer `str` as input.
    * Defines `BOOL` as an `int` and `TRUE`/`FALSE` macros.
    * Iterates through the string.
    * Inside the loop, it checks if the current character `ch` is any of 'a', 'e', 'i', 'o', 'u' (lowercase or uppercase).
    * If a vowel is found, it immediately returns `TRUE`.
    * If the entire string is traversed without finding a vowel, it returns `FALSE`.
* **`main` Function:**
    * Declares a character array `arr` and a `BOOL` variable `bRet`.
    * Gets string input from the user.
    * Calls `ChkVowel(arr)`.
    * Based on the `bRet` value, it prints "Contains Vowel" or "There is no Vowel".

**5. `Question5.c`: Reverse String**

This program reverses and prints a user-entered string.

* **`Reverse` Function:**
    * Takes a character pointer `str` as input.
    * Calculates the `length` of the string by iterating until the null terminator.
    * Uses a `for` loop that iterates from `length - 1` down to `0`.
    * Inside the loop, it prints the character at `str[i]`, effectively printing from the end to the beginning.
    * Prints a newline character at the end.
* **`main` Function:**
    * Declares a character array `arr`.
    * Gets string input from the user.
    * Calls `Reverse(arr)` to print the reversed string.