**1. `Question1.c`**

This file defines a function `OffBit` that aims to turn off a specific bit (the 7th bit, as `iMask` is `0x00000040`).

* If the 7th bit of `iNo` is already set, it toggles (XORs) that bit, effectively turning it off.
* If the 7th bit is not set, it returns the number as is.
The `main` function prompts the user to enter a number, calls `OffBit`, 
and prints the result. The example given (Input: 79, Output: 15) confirms this behavior. 
79 in binary is `01001111`. The 7th bit (0-indexed from right) is set. `0x40` is `01000000`.
XORing them gives `00001111`, which is 15.

**2. `Question2.c`**

This file defines an `OffBit` function that turns off multiple bits specified by `iMask` (`0x00000240`).

* `iMask` is `0x00000240`, which in binary is `0000 0000 0000 0000 0000 0010 0100 0000`. 
This corresponds to the 7th and 10th bits being set.
* The operation `iNo & (~iMask)` clears the bits that are set in `iMask`. 
The `~` operator (bitwise NOT) inverts all bits of `iMask`, 
and then the `&` operator (bitwise AND) with `iNo` ensures that only the bits corresponding to 
`0` in `~iMask` (which were `1` in `iMask`) are turned off in `iNo`.

The `main` function takes user input, calls `OffBit`, and prints the result.

**3. `Question3.c`**

This file defines a `ToggleBit` function that toggles a specific bit.

* `iMask` is `0x00000040`, which represents the 7th bit.
* The operation `iNo ^ iMask` toggles the 7th bit of `iNo`. 
If the 7th bit is 0, it becomes 1; if it's 1, it becomes 0.

The `main` function takes user input, calls `ToggleBit`, 
and prints the result. The example (Input: 137, Output: 201) demonstrates this. 
137 in binary is `10001001`. `0x40` is `01000000`. XORing them: `10001001 ^ 01000000 = 11001001`, which is 201.

**4. `Question4.c`**

This file also defines a `ToggleBit` function, similar to `Question3.c`, but with a different mask.

* `iMask` is `0x00000240`. As seen in `Question2.c`, this mask targets the 7th and 10th bits.
* The operation `iNo ^ iMask` toggles both the 7th and 10th bits of `iNo`.

The `main` function takes user input, calls `ToggleBit`, and prints the result.

**5. `Question5.c`**

This file defines an `OnBit` function that turns on specific bits.

* `iMask` is `0x0000000F`, which in binary is `0000 0000 0000 0000 0000 0000 0000 1111`. 
This mask targets the first four bits (bits 0, 1, 2, and 3).
* The operation `iNo | iMask` performs a bitwise OR. 
This operation ensures that if any of the bits in `iMask` are set (i.e., 1), 
the corresponding bits in `iNo` will also be set to 1, regardless of their original state.

The `main` function takes user input, calls `OnBit`, and prints the result. 
The example (Input: 73, Output: 79) confirms this. 73 in binary is `01001001`. 
`0x0F` is `00001111`. ORing them: `01001001 | 00001111 = 01001111`, which is 79.