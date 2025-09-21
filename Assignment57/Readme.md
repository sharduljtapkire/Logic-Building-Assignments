# Java Array Programming Problems

This repository contains a collection of five common programming problems related to array manipulations, implemented in Java. Each problem is self-contained in its own file and demonstrates a specific algorithm or data structure technique.

## Problems Overview

1.  **`Question1.java`**: Maximum Difference
2.  **`Question2.java`**: Product Array Puzzle
3.  **`Question3.java`**: Segregate Even and Odd Numbers
4.  **`Question4.java`**: Equilibrium Index
5.  **`Question5.java`**: Pythagorean Triplet

-----

## How to Compile and Run

You will need a Java Development Kit (JDK) installed on your system to compile and run these files.

Open a terminal or command prompt and navigate to the directory containing these files.

**To compile a file:**

```bash
javac <FileName>.java
```

**Example:**

```bash
javac Question1.java
```

**To run the compiled code:**

```bash
java <ClassName>
```

**Example:**

```bash
java Question1
```

The program will then prompt you to enter the number of elements and the elements of the array.

-----

## Detailed Problem Descriptions

### 1\. Maximum Difference (`Question1.java`)

  * **Problem:** Given an array of integers, find the maximum difference between two elements `arr[j] - arr[i]` such that `j > i`.

  * **Approach:** The solution iterates through the array once. It maintains two variables: `maxDiff` to store the maximum difference found so far, and `minValue` to keep track of the smallest element encountered. For each element, it updates `maxDiff` if the difference between the current element and `minValue` is greater. It also updates `minValue` if the current element is smaller than the existing `minValue`.

  * **Complexity:**

      * Time Complexity: $O(n)$, as it involves a single pass through the array.
      * Space Complexity: $O(1)$, as it uses a constant amount of extra space.

### 2\. Product Array Puzzle (`Question2.java`)

  * **Problem:** Given an array of integers, construct a `Product Array` of the same size such that `prod[i]` is equal to the product of all the elements of the original array except `arr[i]`. This must be done without using the division operator.

  * **Approach:** The problem is solved efficiently by using two auxiliary arrays: `left[]` and `right[]`.

    1.  The `left[i]` array stores the product of all elements to the left of index `i`.
    2.  The `right[i]` array stores the product of all elements to the right of index `i`.
    3.  The final product for each element `i` is then calculated as `left[i] * right[i]`.

  * **Complexity:**

      * Time Complexity: $O(n)$, due to three separate passes over the array.
      * Space Complexity: $O(n)$, for the auxiliary `left`, `right`, and `prod` arrays.

### 3\. Segregate Even and Odd Numbers (`Question3.java`)

  * **Problem:** Rearrange an array of integers so that all even numbers appear before all odd numbers. The relative order of the even or odd numbers does not need to be preserved.

  * **Approach:** A two-pointer technique is used for an in-place rearrangement.

      * A `left` pointer starts from the beginning of the array, and a `right` pointer starts from the end.
      * The `left` pointer moves forward until it finds an odd number.
      * The `right` pointer moves backward until it finds an even number.
      * If `left` is still less than `right`, the elements at these two pointers are swapped. The process continues until the pointers cross each other.

  * **Complexity:**

      * Time Complexity: $O(n)$, as each array element is visited at most once.
      * Space Complexity: $O(1)$, because the array is modified in-place.

### 4\. Equilibrium Index (`Question4.java`)

  * **Problem:** Find the "equilibrium index" of an array. An equilibrium index is an index `i` such that the sum of elements at lower indices is equal to the sum of elements at higher indices. The function should return the first such index found.

  * **Approach:**

    1.  First, the `totalSum` of all elements in the array is calculated.
    2.  The code then iterates through the array, maintaining a `leftSum`.
    3.  In each iteration `i`, the `totalSum` is first reduced by the current element `arr[i]`. At this point, `totalSum` represents the `rightSum`.
    4.  A check is performed to see if `leftSum == totalSum`. If they are equal, index `i` is the equilibrium index.
    5.  After the check, the current element `arr[i]` is added to `leftSum` for the next iteration.
        If no such index is found after the loop, -1 is returned.

  * **Complexity:**

      * Time Complexity: $O(n)$, as it requires two passes over the array (one to get the total sum, and a second to find the index).
      * Space Complexity: $O(1)$.

### 5\. Pythagorean Triplet (`Question5.java`)

  * **Problem:** Given an array of integers, determine whether there is a triplet `(a, b, c)` in the array that satisfies the Pythagorean theorem, $a^2 + b^2 = c^2$.

  * **Approach:** The solution is based on a combination of sorting and the two-pointer technique.

    1.  First, every element in the array is squared.
    2.  The array of squared numbers is then sorted in ascending order.
    3.  The algorithm iterates through the sorted array from the end (largest element). Let the current element be `c` (`arr[i]`).
    4.  For each `c`, it uses two pointers, `l` (starting at 0) and `r` (starting at `i-1`), to find if there is a pair `a` (`arr[l]`) and `b` (`arr[r]`) in the subarray `arr[0...i-1]` such that `a + b = c`.
    5.  If `arr[l] + arr[r] == arr[i]`, a triplet is found. If the sum is less, `l` is incremented. If the sum is greater, `r` is decremented.

  * **Complexity:**

      * Time Complexity: $O(n^2)$. Squaring takes $O(n)$, sorting takes $O(n \\log n)$, and the nested loop with the two-pointer scan takes $O(n^2)$. The overall complexity is dominated by the nested loop.
      * Space Complexity: $O(1)$ or $O(\\log n)$ depending on the space complexity of the sorting algorithm used. The array is modified in-place.