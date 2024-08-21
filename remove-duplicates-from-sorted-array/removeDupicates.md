# Remove Duplicates from Sorted Array

## Problem Description

The goal of this function is to remove duplicates from a sorted array in-place and return the new length of the array with unique elements.

## Approach

The approach used to solve this problem involves iterating through the array and maintaining a pointer to track the position of the last unique element. Here's a step-by-step explanation:

1. **Initialize Variables:**
   - `size`: Stores the size of the input vector `nums`.
   - `k`: This variable tracks the position in the array where the next unique element should be placed. It starts from 1 because the first element is always unique.
   - `lastUnique`: This variable keeps track of the last unique element encountered during the iteration. It is initialized to the first element of the array.

2. **Iterate Through the Array:**
   - Loop through each element in the array with an index `i`.
   - Check if the current element `nums[i]` is different from `lastUnique`.
     - If it is different, this means a new unique element is found:
       - If `k` is not equal to `i`, update the element at index `k` with the current element `nums[i]`.
       - Increment `k` to point to the next position where a unique element should be placed.
       - Update `lastUnique` to the current element `nums[i]`.

3. **Return Result:**
   - After the loop ends, `k` will hold the count of unique elements. The elements from index `0` to `k-1` in the array will contain the unique elements.
