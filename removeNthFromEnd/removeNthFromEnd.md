
# 📝 Remove Nth Node from End of List (C++ Code)

Here is the C++ implementation of removing the N-th node from the end of a linked list, which is a common problem in coding interviews. This solution uses a **two-pointer technique** to efficiently find and remove the node. 🧑‍💻

## 🚀 Explanation
1. **Edge Case Handling:** If the head is `nullptr` or `n` is non-positive, we return `nullptr`.
2. **Dummy Node:** A dummy node is used to simplify edge cases where the node to be removed is the head.
3. **Two Pointers:** 
   - `fast` pointer moves ahead by `n+1` steps.
   - `slow` pointer starts from the dummy and moves along with `fast` until `fast` reaches the end of the list.
4. **Node Removal:** The node after `slow` is the N-th node from the end. We remove it by adjusting pointers and deallocate memory.

### 💡 Notes:
- **Time Complexity:** `O(L)` where `L` is the length of the linked list.
- **Space Complexity:** `O(1)` as we only use two additional pointers.

---

I hope you found this useful! 🎉 Happy coding! ✨
