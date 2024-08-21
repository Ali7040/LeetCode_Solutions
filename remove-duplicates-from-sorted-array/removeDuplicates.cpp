#include <vector>

class solution{
    public:
    int removeDuplicates(std::vector<int>&nums){
        int size = nums.size();
        int k = 1;
        int lastUnique = nums[0];
        for(int i =0; i < size; i++){
            if(nums[i]!= lastUnique){
                if(k != i){
                    nums[k] = nums[i];
                }
                ++k;
                lastUnique = nums[i]
            }
        }
        return k;
    }
}