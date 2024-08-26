# Plus One

## Problem Description

The "Plus One" problem involves incrementing a large integer represented as an array of digits by one. The digits are stored such that the most significant digit is at the beginning of the array, and each element in the array represents a single digit.

**Example:**

Given the array `digits = [1, 2, 3]`, incrementing the integer by one will result in `[1, 2, 4]`.

## Solution Overview

The solution to this problem handles the increment operation in the following way:

1. Traverse the array from the last digit to the first digit.
2. If the current digit is less than 9, increment it and return the updated array.
3. If the current digit is 9, set it to 0 and move to the next more significant digit.
4. If all digits are 9, insert a new leading digit 1 at the beginning of the array.

## Code

For the implementation, refer to the `Solution.cpp` file provided separately.

## Usage

To use the provided C++ code:

1. Include the `Solution.h` header file in your C++ project.
2. Instantiate the `Solution` class.
3. Call the `plusOne` method, passing the vector of digits as an argument.
4. The method will return the updated vector with the incremented value.

**Example Usage:**

```cpp
#include "Solution.h"
#include <vector>
#include <iostream>

int main() {
    Solution sol;
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> result = sol.plusOne(digits);
    for (int digit : result) {
        std::cout << digit << " ";
    }
    return 0;
}
```
## Dependencies
Standard C++ Library

