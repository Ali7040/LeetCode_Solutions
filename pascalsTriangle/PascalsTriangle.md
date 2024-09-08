
# Pascal's Triangle - LeetCode Solution 🚀

## Problem Statement
Given an integer `numRows`, return the first `numRows` of Pascal's triangle.

## Approach

To generate Pascal's Triangle, follow these steps:

1. **Initialization**:
   - Create a 2D vector `result` to store the rows of Pascal's Triangle.

2. **Iterate through the rows**:
   - Loop from `0` to `numRows - 1` to generate each row.
   - For each row `i`, initialize a vector `row` with `i + 1` elements, all set to `1` because the first and last elements of each row are always `1`.

3. **Fill in the values**:
   - For each element `j` in the row, except for the first and last elements, set `row[j]` to the sum of the two elements directly above it from the previous row:
     \[
     row[j] = result[i - 1][j - 1] + result[i - 1][j]
     \]

4. **Add the row to the result**:
   - Append the fully populated row to the `result` vector.

5. **Return the result**:
   - After generating all rows, return the `result` vector.

### Time Complexity ⏱️
- The time complexity is **O(numRows^2)** because we are iterating through each element of each row once.

### Space Complexity 💾
- The space complexity is **O(numRows^2)** due to the space required to store the entire triangle in memory.

## Code Implementation in C++

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;
        for(int i=0; i < numRows; i++){
            std::vector<int> row(i + 1, 1);
            for(int j = 1; j < i; j++){
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};
```

### LeetCode Performance 💯
- **Time Complexity**: `0ms` (As fast as possible)
- **Space Complexity**: `0ms` (Optimal memory usage)
  
> 🚀 **Conclusion**: This solution efficiently generates Pascal's Triangle with minimal time and space complexity. Enjoy coding!

---

**Keep Coding!** 💻✨
