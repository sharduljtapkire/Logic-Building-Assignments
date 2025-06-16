This is a `C` program that demonstrates several string manipulation functions.

### Functions:

1.  **`StrCpyX(char *src, char *dest)`**
    * **Description**: Copies the contents of the `src` string to the `dest` string.
    * **Parameters**:
        * `src`: A pointer to the source string.
        * `dest`: A pointer to the destination string.
    * **Edge Case**: If the source string is empty, it prints a message and sets the first character of the destination string to the null terminator.
    * **Usage Example**:
        ```c
        char arr[30];
        char brr[30];
        // User enters "Hello" into arr
        StrCpyX(arr, brr);
        // brr will contain "Hello"
        ```

2.  **`StrNCpyX(char *src, char *dest, int iCnt)`**
    * **Description**: Copies a specified number of characters (`iCnt`) from the `src` string to the `dest` string.
    * **Parameters**:
        * `src`: A pointer to the source string.
        * `dest`: A pointer to the destination string.
        * `iCnt`: The number of characters to copy.
    * **Edge Case**: If the source string is empty, it prints a message and sets the first character of the destination string to the null terminator.
    * **Usage Example**:
        ```c
        char arr[30];
        char brr[30];
        // User enters "Programming" into arr and 4 for n
        StrNCpyX(arr, brr, n);
        // brr will contain "Prog"
        ```

3.  **`StrCpyCap(char *src, char *dest)`**
    * **Description**: Copies only the capital (uppercase) letters from the `src` string to the `dest` string.
    * **Parameters**:
        * `src`: A pointer to the source string.
        * `dest`: A pointer to the destination string.
    * **Edge Case**: If the source string is empty, it prints a message and sets the first character of the destination string to the null terminator.
    * **Usage Example**:
        ```c
        char arr[30];
        char brr[30];
        // User enters "HeLlO WoRlD" into arr
        StrCpyCap(arr, brr);
        // brr will contain "HLOWRD"
        ```

4.  **`StrCpySmall(char *src, char *dest)`**
    * **Description**: Copies only the small (lowercase) letters from the `src` string to the `dest` string.
    * **Parameters**:
        * `src`: A pointer to the source string.
        * `dest`: A pointer to the destination string.
    * **Edge Case**: If the source string is empty, it prints a message and sets the first character of the destination string to the null terminator.
    * **Usage Example**:
        ```c
        char arr[30];
        char brr[30];
        // User enters "HeLlO WoRlD" into arr
        StrCpySmall(arr, brr);
        // brr will contain "elloorld"
        ```

5.  **`StrCatX(char *src, char *dest)`**
    * **Description**: Concatenates the `dest` string to the end of the `src` string.
    * **Parameters**:
        * `src`: A pointer to the first string (which will contain the concatenated result).
        * `dest`: A pointer to the second string to be appended.
    * **Note**: The function assumes `src` has enough pre-allocated space to hold the concatenated string.
    * **Usage Example**:
        ```c
        char arr[100]; // Make sure arr is large enough
        char brr[50];
        // User enters "Hello" into arr and "World" into brr
        StrCatX(arr, brr);
        // arr will contain "HelloWorld"
        ```