This repository contains C programs that demonstrate various bitwise operations.

## Programs

### 1. Count ON bits

[cite_start]This program counts the number of ON (1) bits in a given integer without using the modulo (`%`) or division (`/`) operators[cite: 42].

* [cite_start]**Function:** `int CountOne(UINT iNo)` [cite: 44]
* [cite_start]**Input:** An unsigned integer[cite: 44].
* **Output:** The count of ON bits.

### 2. Display Common ON Bits

[cite_start]This program takes two numbers as input and displays the positions of the bits that are ON (1) in both numbers[cite: 48].

* [cite_start]**Function:** `void CommonBits(UINT iNo1, UINT iNo2)` [cite: 54]
* [cite_start]**Input:** Two unsigned integers[cite: 54].
* [cite_start]**Output:** The positions of the common ON bits[cite: 48].

### 3. Check 9th or 12th Bit

[cite_start]This program checks whether the 9th or 12th bit of a given number is ON[cite: 58].

* [cite_start]**Function:** `BOOL ChkBit(UINT iNo)` [cite: 60]
* [cite_start]**Input:** An unsigned integer[cite: 60].
* [cite_start]**Output:** `TRUE` if either the 9th or 12th bit is ON, otherwise `FALSE`[cite: 59, 60].

### 4. Check Bit at Two Positions

[cite_start]This program checks if a bit is ON at a user-specified first position OR a user-specified second position[cite: 64].

* [cite_start]**Function:** `BOOL ChkBit(UINT iNo, int iPos1, int iPos2)` [cite: 66]
* [cite_start]**Input:** A number and two bit positions[cite: 64, 66].
* [cite_start]**Output:** `TRUE` if the bit at either position is ON, otherwise `FALSE`[cite: 65, 66].

### 5. Toggle Bits within a Range

[cite_start]This program toggles all the bits within a given range of positions for a number[cite: 74, 75].

* [cite_start]**Function:** `UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)` [cite: 79]
* [cite_start]**Input:** A number, a starting position, and an ending position[cite: 74, 79].
* [cite_start]**Output:** The modified number with the bits in the specified range toggled[cite: 75].

## How to Compile and Run

To compile any of the programs, use a C compiler like GCC:

`gcc <program_name>.c -o <output_filename>`

To run the compiled program:

`./<output_filename>`