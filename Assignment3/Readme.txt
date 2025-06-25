C Programs – Basic Input, Loops, and Character Handling
This repository includes a collection of beginner-level C programs that focus on:

User input handling

Conditional statements

Loop-based logic

Character processing

These programs are ideal for foundational C programming practice and interview preparation.

List of Programs
1. Print N Even Numbers
File: Question1.c

Description: Accepts one integer from the user and prints that many even numbers starting from 2.

Input: Integer (e.g., 5)
Output: 2 4 6 8 10

Logic:

Loop runs from 1 to iNo

Each even number is generated using iCnt × 2

2. Print Even Factors of a Number
File: Question2.c

Description: Accepts a number from the user and prints all of its even factors.

Input: Integer (e.g., 36)
Output: 2 4 6 12 18

Logic:

Loop from 1 to iNo / 2

Print iCnt if:

iNo is divisible by iCnt (iNo % iCnt == 0)

iCnt is even (iCnt % 2 == 0)

3. Display Even Factors
File: Question3.c

Description: Accepts a number and displays its even factors.

Input: Integer (e.g., 24)
Output: 2 4 6 8 12

Logic:

Same as Program 2

Repeated with a different function name

4. Convert Case of a Character
File: Question4.c

Description: Accepts a character and converts its case.

Lowercase to Uppercase

Uppercase to Lowercase

Input: Character (e.g., 'a' or 'G')
Output:

'a' becomes 'A'

'G' becomes 'g'

Note: If input is not an English alphabet character, an error message is displayed.

5. Check Whether Character is a Vowel
File: Question5.c

Description: Accepts a character and checks whether it is a vowel (A, E, I, O, U) in either case.

Input: Character (e.g., 'E')
Output:

"E Is A Vowel"

"B Is Not A Vowel"

Logic:

Checks if character matches any vowel using multiple OR conditions

Compilation and Execution
To compile and run any program:


gcc file_name.c -o program_name
./program_name
Example:


gcc Question1.c -o Myexe
Myexe.exe

Author
Name: Shardul Jitendra Tapkire