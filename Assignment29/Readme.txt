# File Operations in C

This repository contains several C programs that perform different operations on text files, 
such as counting characters, spaces, and displaying file content.

## Programs Included:

1.  **`Question1.c` - Count Capital Characters**
    * **Description**: This program opens a specified file and counts the total number of capital (uppercase) characters present in it.
    * **How to compile**: `gcc Question1.c -o Question1`
    * **How to run**: `./Question1`
    * **Input**: Prompts the user to enter the filename.
    * **Output**: Displays the total count of capital characters.

2.  **`Question2.c` - Count Small Characters**
    * **Description**: This program opens a specified file and counts the total number of small (lowercase) characters present in it.
    * **How to compile**: `gcc Question2.c -o Question2`
    * **How to run**: `./Question2`
    * **Input**: Prompts the user to enter the filename.
    * **Output**: Displays the total count of small characters.

3.  **`Question3.c` - Count Spaces**
    * **Description**: This program opens a specified file and counts the total number of space characters present in it.
    * **How to compile**: `gcc Question3.c -o Question3`
    * **How to run**: `./Question3`
    * **Input**: Prompts the user to enter the filename.
    * **Output**: Displays the total count of spaces.

4.  **`Question4.c` - Count Specific Character Frequency**
    * **Description**: This program opens a specified file and counts the frequency of a particular character entered by the user.
    * **How to compile**: `gcc Question4.c -o Question4`
    * **How to run**: `./Question4`
    * **Input**: Prompts the user to enter the filename and then the character to count.
    * **Output**: Displays the frequency of the entered character.

5.  **`Question5.c` - Display N Characters**
    * **Description**: This program opens a specified file and displays the first 'N' characters from it, where 'N' is provided by the user. If 'N' is greater than the `BUFFER_SIZE` (1024 bytes), it will display up to `BUFFER_SIZE` characters.
    * **How to compile**: `gcc Question5.c -o Question5`
    * **How to run**: `./Question5`
    * **Input**: Prompts the user to enter the filename and the number of characters to display.
    * **Output**: Displays the first 'N' characters of the file.

---

## Common Features and Libraries Used:

* **File I/O**: All programs use standard Unix-like system calls for file operations (`open`, `read`, `close`).
* **`stdio.h`**: For standard input/output functions like `printf` and `scanf`.
* **`stdlib.h`**: For general utility functions.
* **`fcntl.h`**: For file control options, specifically `O_RDONLY` for opening files in read-only mode.
* **`unistd.h`**: For POSIX operating system API, including `read` and `close`.
* **`string.h`**: Used for `memset` in some programs to clear the buffer.
* **`BUFFER_SIZE`**: A pre-defined macro set to `1024` bytes, used as a buffer for reading file content in chunks.

## Error Handling:

Each program includes basic error handling for file opening failures. If a file cannot be opened, an appropriate error message is displayed.

---