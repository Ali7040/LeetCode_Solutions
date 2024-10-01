# 🟢 **isSameTree Function Explanation**

### 🌳 Problem Overview:
The `isSameTree` function checks whether two binary trees are identical or not. Two trees are considered identical if:
- They are structurally the same.
- Each corresponding node in both trees has the same value.

### 📚 **Approach:**
1. **Base Case**:
   - If both trees `p` and `q` are `nullptr` (empty), they are considered identical.
   - If one of them is `nullptr` while the other is not, the trees are not identical.

2. **Recursive Case**:
   - If the values of the current nodes in both trees are different, the trees are not identical.
   - Recursively check the left children and right children of both trees to ensure structural and value consistency.
   - Use logical **AND** between the recursive calls to the left and right subtrees, as both must be true for the trees to be identical.

### 🕒 **Time Complexity**:
- The function visits every node in both trees exactly once, making it an **O(N)** solution, where **N** is the number of nodes in the tree.
- The worst-case scenario occurs when both trees have the same structure and values, causing the function to traverse every node.

### 💾 **Space Complexity**:
- The space complexity depends on the depth of recursion. In the worst case, the recursion goes as deep as the height of the tree.
  - **O(h)** where **h** is the height of the tree. In a balanced tree, this will be **O(log N)**, and in a skewed tree, it will be **O(N)**.
  