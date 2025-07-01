**`Question1.c`**
* **Purpose:** Checks if the 15th bit of the input number is ON.
* **Mask:** `0x00004000` (which is $2^{14}$). If the 15th bit (counting from 1) is ON, this specific bit will be set in the mask.
* **Output:** Prints "15th bit is ON." or "15th bit is OFF." based on the check.

**`Question2.c`**
* **Purpose:** Checks if both the 5th and 18th bits of the input number are ON.
* **Mask:** `0x00020010` (which is $2^{4} + 2^{17}$).
* **Output:** Prints "5th and 18th bits are both ON." or "At least one of the 5th or 18th bits is OFF."

**`Question3.c`**
* **Purpose:** Checks if the 7th, 15th, 21st, and 28th bits of the input number are all ON.
* **Mask:** `0x08104040` (which is $2^{6} + 2^{14} + 2^{20} + 2^{27}$).
* **Output:** Prints "7th, 15th, 21st, and 28th bits are all ON." or "At least one of the 7th, 15th, 21st, or 28th bits is OFF."

**`Question4.c`**
* **Purpose:** Checks if the 7th, 8th, and 9th bits of the input number are all ON.
* **Mask:** `0x000001C0` (which is $2^{6} + 2^{7} + 2^{8}$).
* **Output:** Prints "7th, 8th, and 9th bits are all ON." or "At least one of the 7th, 8th, or 9th bits is OFF."

**`Question5.c`**
* **Purpose:** Checks if both the 1st (least significant) and 32nd (most significant for a 32-bit unsigned int) bits of the input number are ON.
* **Mask:** `0x80000001` (which is $2^{0} + 2^{31}$).
* **Output:** Prints "First and last bits are both ON." or "At least one of the first or last bits is OFF."

**Common Structure:**
All files share a similar structure:
* Includes `stdio.h` for input/output operations.
* Defines `BOOL` as `int` and `UINT` as `unsigned int`.
* Defines `TRUE` as 1 and `FALSE` as 0.
* The `ChkBit` function takes an `unsigned int` (`iNo`) as input.
* Inside `ChkBit`, a `UINT iMask` is defined with specific bits set, corresponding to the bits to be checked.
* The core logic `(iNo & iMask) == iMask` checks if all the bits set in `iMask` are also set in `iNo`.
* The `main` function prompts the user to enter a number, calls `ChkBit`, and prints the appropriate message based on the returned boolean value.