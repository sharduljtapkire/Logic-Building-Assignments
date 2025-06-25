

* **`Question1.c`**:
This program prompts the user to enter a filename and attempts 
to open it in read-write mode (`O_RDWR`).
It then prints a success message along with the file descriptor 
if the file is opened successfully, otherwise, it indicates an error.

* **`Question2.c`**:
This program takes a filename as input from the user 
and attempts to create a new file with that name using the `creat()` system call with read, 
write, and execute permissions for all (0777). 
It reports whether the file creation was successful and displays the file descriptor.

* **`Question3.c`**: 
This program asks the user for a filename, 
opens it in read-only mode (`O_RDONLY`), 
reads up to 20 bytes from the file into a buffer, 
and then prints the number of bytes read and the content read from the file.

* **`Question4.c`**: 
This program takes a filename, 
opens it in read-only mode, and then uses `lseek()` 
to determine the size of the file by moving the file pointer to the end (`SEEK_END`). 
It prints the calculated file size in bytes and 
then resets the file pointer to the beginning (`SEEK_SET`) before closing the file.

* **`Question5.c`**: 
This program prompts the user for a filename. 
It opens the specified file with `O_CREAT`, `O_WRONLY`, and `O_APPEND` flags, 
which means it will create the file if it doesn't exist, 
open it for writing, 
and append data to the end of the file. 
It then writes the hardcoded string "Hello world" to the file and reports the number of bytes written.