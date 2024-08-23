# Binary Search Insert Position

## Overview

The `searchInsert` function is designed to find the index where a target value should be inserted into a sorted array to maintain its sorted order. If the target value already exists in the array, the function returns its index. If it does not exist, the function returns the index where it would be inserted.

## Function Description

- **Function Name**: `searchInsert`
- **Parameters**:
  - `std::vector<int>& nums`: A reference to a vector of integers representing the sorted array.
  - `int target`: The target integer value to search for or insert.
- **Returns**: An integer representing the index at which the target value is found or should be inserted.

## Algorithm

1. **Initialize Pointers**:
   - `low`: Start of the array.
   - `high`: End of the array.

2. **Binary Search**:
   - Compute the middle index `mid`.
   - Compare the middle element with the target value:
     - If `nums[mid]` equals the target, return `mid`.
     - If `nums[mid]` is less than the target, adjust the `low` pointer to `mid + 1`.
     - If `nums[mid]` is greater than the target, adjust the `high` pointer to `mid - 1`.

3. **Insert Position**:
   - If the target is not found in the array, the loop ends when `low` surpasses `high`.
   - Return `low` as the index where the target should be inserted.

## Example

Consider a sorted array `[1, 3, 5, 6]` and a target value `5`:
- The function will return `2` since `5` is found at index `2`.

For the same array and target value `2`:
- The function will return `1` as `2` should be inserted at index `1` to maintain the sorted order.

## Usage

This function is useful for scenarios where you need to find an insertion index for maintaining order in a sorted list, such as in search algorithms, databases, or any system requiring efficient ordered data handling.
