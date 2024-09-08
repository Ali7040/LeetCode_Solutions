# Pascal's Triangle Row Retrieval 🌟

### Problem Statement 💡
Given an index `rowIndex`, return the row of Pascal's Triangle at that index. Pascal's Triangle is a triangular array where the numbers on the edges are always `1`, and each number inside the triangle is the sum of the two numbers above it.

### Approach 🚀

We use a **dynamic programming** approach to solve this problem. The idea is to construct only the desired row, instead of the entire Pascal's Triangle.

1. **Initialize the result**:  
   - We start by initializing a vector `result` of size `rowIndex + 1`, with all elements set to `1`. The first and last elements of any row in Pascal's Triangle are always `1`.
   - Example for rowIndex 3: `[1, 1, 1, 1]`

2. **Updating the middle elements**:  
   - For each position `i`, we update elements starting from the back of the array. This avoids overwriting elements that we still need to use for calculations.
   - For example, for rowIndex 3:  
     After the first pass, we update `[1, 2, 1, 1]`.  
     After the second pass, it becomes `[1, 3, 3, 1]`.

3. **Return the result**:  
   - After filling in the row, we return the vector `result`, which now holds the correct values for the requested row of Pascal's Triangle.

### Time Complexity ⏳

- **Time Complexity**: `O(n^2)`  
  Although we perform nested iterations, we only calculate the values for one row, which takes a time proportional to the number of elements in that row.

### Space Complexity 💾

- **Space Complexity**: `O(n)`  
  We use a single vector `result` to store the row, so the space complexity is linear with respect to `rowIndex`.

### Summary 📝

- **Dynamic Programming**: We compute the values row by row, without using extra space for storing the entire triangle.
- **Efficient**: This approach optimally calculates the row in-place, ensuring no additional storage is required.
