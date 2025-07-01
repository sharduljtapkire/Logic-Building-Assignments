## Programs

### 1. Check a Bit at a Specific Position

This program checks if a bit at a given position is 'on' (1) or 'off' (0).

- **Function:** `BOOL ChkBit(UINT iNo, int iPos)`
- **Input:** A number and a bit position.
- **Output:** `TRUE` if the bit is 'on', `FALSE` otherwise.

### 2. Turn Off a Bit at a Specific Position

This program turns off (sets to 0) the bit at a specified position and returns the modified number.

- **Function:** `UINT OffBit(UINT iNo, int iPos)`
- **Input:** A number and a bit position.
- **Output:** The modified number with the bit at the given position turned off.

### 3. Turn On a Bit at a Specific Position

This program turns on (sets to 1) the bit at a specified position and returns the modified number.

- **Function:** `UINT OnBit(UINT iNo, int iPos)`
- **Input:** A number and a bit position.
- **Output:** The modified number with the bit at the given position turned on.

### 4. Toggle a Bit at a Specific Position

This program toggles (flips) the bit at a specified position and returns the modified number.

- **Function:** `UINT ToggleBit(UINT iNo, int iPos)`
- **Input:** A number and a bit position.
- **Output:** The modified number with the bit at the given position toggled.

### 5. Toggle First and Last Nibble

This program toggles the contents of the first and last nibbles (a group of four bits) of a number.

- **Function:** `UINT ToggleBit(UINT iNo)`
- **Input:** A number.
- **Output:** The modified number with the first and last nibbles toggled.

## How to Compile and Run

To compile any of the programs, use a C compiler like GCC:

`gcc <program_name>.c -o <output_filename>`

To run the compiled program:

`./<output_filename>`