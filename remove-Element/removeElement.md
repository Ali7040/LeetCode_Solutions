# Remove Element Function

This repository contains a C++ implementation of the `removeElement` function, which removes all occurrences of a specified value from a vector and returns the new length of the vector.

## Function Explanation

- **Function Name**: `removeElement`
- **Parameters**:
  - `std::vector<int>& nums`: The input vector of integers.
  - `int val`: The value to be removed from the vector.
- **Return Type**: `int`
  - The function returns the new length of the vector after removing all instances of `val`.

### Algorithm
The function iterates through the vector and copies each element that is not equal to `val` to the beginning of the vector. It uses a pointer `k` to keep track of the position where the next non-val element should be placed. At the end of the iteration, `k` will be the length of the new vector with all instances of `val` removed.

## Usage

To use this function, include it in your C++ project and call `removeElement` by passing the vector and the value to be removed.

## Example

```cpp
std::vector<int> nums = {3, 2, 2, 3};
int val = 3;
solution sol;
int newLength = sol.removeElement(nums, val);
// The result will be `newLength = 2`, and `nums` will be modified to {2, 2}.
