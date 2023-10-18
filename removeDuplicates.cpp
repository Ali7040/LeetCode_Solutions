class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int size = nums.size();
        int k = 1;
        int lastUnique = nums[0];
        for (int i = 1; i < size; ++i) {
            if (nums[i] != lastUnique) {
                if (i != k) {
                    nums[k] = nums[i];
                }
                ++k;
                lastUnique = nums[i];
            }
        }
        return k;
    }
};
