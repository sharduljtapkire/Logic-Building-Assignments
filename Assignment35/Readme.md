**1. `Question1.c`: Displaying Perfect Numbers in a Singly Linked List**

* **Structure Definition:** Defines a `struct node` for the linked list, containing an integer `Data` and a pointer `Next` to the subsequent node. Typedefs `NODE`, `PNODE` (pointer to node), and `PPNODE` (pointer to pointer to node) are used for convenience.
* **`InsertFirst(PPNODE Head, int no)`:** This function inserts a new node with the given `no` at the beginning of the linked list. It handles both empty and non-empty list cases.
* **`IsPerfect(int no)`:** This helper function checks if a given integer `no` is a perfect number. A perfect number is a positive integer that is equal to the sum of its proper positive divisors (divisors excluding the number itself). The function iterates from 1 up to `no/2` to find divisors and sums them up.
* **`DisplayPerfect(PNODE Head)`:** This function traverses the linked list and uses the `IsPerfect` function to check each node's `Data`. If the data is a perfect number, it prints the number.
* **`main()`:**
    * Initializes an empty linked list (`First = NULL`).
    * Inserts several elements (89, 6, 41, 17, 28, 11) at the beginning of the list.
    * Calls `DisplayPerfect` to print all perfect numbers found in the list. In the given example, `6` and `28` are perfect numbers.

**2. `Question2.c`: Displaying Prime Numbers in a Singly Linked List**

* **Structure Definition:** Same linked list structure as in `Question1.c`.
* **`InsertFirst(PPNODE Head, int no)`:** Same insertion function as in `Question1.c`.
* **`IsPrime(int no)`:** This helper function checks if a given integer `no` is a prime number.
    * It returns `0` (false) if `no` is less than 2 (as prime numbers are greater than or equal to 2).
    * It then iterates from 2 up to `no/2`. If any number in this range divides `no` evenly, then `no` is not prime, and the function returns `0`.
    * If the loop completes without finding any divisors, the number is prime, and the function returns `1` (true).
* **`DisplayPrime(PNODE Head)`:** This function traverses the linked list and uses the `IsPrime` function to check each node's `Data`. If the data is a prime number, it prints the number.
* **`main()`:**
    * Initializes an empty linked list (`First = NULL`).
    * Inserts several elements (89, 22, 41, 17, 20, 11) at the beginning of the list.
    * Calls `DisplayPrime` to print all prime numbers found in the list.

**3. `Question3.c`: Sum of Even Elements in a Singly Linked List**

* **Structure Definition:** Same linked list structure.
* **`InsertFirst(PPNODE Head, int no)`:** Same insertion function.
* **`AdditionEven(PNODE Head)`:** This function traverses the linked list. For each node, it checks if `Head->Data` is an even number (`Head->Data % 2 == 0`). If it is, the data is added to a running sum `iSum`. Finally, it returns the total sum of even elements.
* **`main()`:**
    * Initializes an empty linked list.
    * Inserts elements (41, 32, 20, 11).
    * Calls `AdditionEven` and prints the returned sum of even elements.

**4. `Question4.c`: Finding the Second Maximum Element in a Singly Linked List**

* **Structure Definition:** Same linked list structure.
* **`InsertFirst(PPNODE Head, int no)`:** Same insertion function.
* **`SecMaximum(PNODE Head)`:** This function finds the second largest element in the linked list.
    * It initializes `Max` and `SecMax` to 0.
    * It handles edge cases: if the list is empty or has only one element, it returns -1 as there's no second maximum.
    * It initializes both `Max` and `SecMax` with the data of the first node and then moves `Head` to the next node.
    * It iterates through the rest of the list:
        * If `Head->Data` is greater than `Max`, it means a new maximum is found. The current `Max` becomes `SecMax`, and `Head->Data` becomes the new `Max`.
        * Else if `Head->Data` is greater than `SecMax` *and* `Head->Data` is not equal to `Max` (to handle duplicate maximums), then `Head->Data` becomes the new `SecMax`.
    * Finally, it returns the `SecMax`.
* **`main()`:**
    * Initializes an empty linked list.
    * Inserts elements (240, 320, 230, 110).
    * Calls `SecMaximum` and prints the second maximum element.

**5. `Question5.c`: Sum of Digits of Each Element in a Singly Linked List**

* **Structure Definition:** Same linked list structure.
* **`InsertFirst(PPNODE Head, int no)`:** Same insertion function.
* **`SumDigit(PNODE Head)`:** This function traverses the linked list. For each node:
    * It takes the `Head->Data` as `num`.
    * It initializes `iSum` to 0.
    * It then enters a `while` loop that continues as long as `num` is not 0. Inside the loop:
        * `num % 10` extracts the last digit of `num`, which is added to `iSum`.
        * `num / 10` removes the last digit from `num`.
    * After the inner loop finishes (meaning all digits of the current node's data have been summed), it prints the `iSum`.
    * The `Head` pointer then moves to the next node.
* **`main()`:**
    * Initializes an empty linked list.
    * Inserts elements (640, 240, 20, 230, 110).
    * Calls `SumDigit` to print the sum of digits for each element in the list.