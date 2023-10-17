int removeDuplicates(std::vector<int>& nums) {
        int size = nums.size();
        if (size == 0) {
            return 0; 
        }
        int k = 1;
        for (int i = 1; i < size; ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                ++k;
            }
        }
        return k;
    }
