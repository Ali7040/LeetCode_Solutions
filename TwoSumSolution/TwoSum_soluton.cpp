#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numIndexMap;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            if (numIndexMap.find(complement) != numIndexMap.end()) {
                // If found, return the indices of the two numbers
                return {numIndexMap[complement], i};
            }

            // If the complement is not found, add the current number to the map
            numIndexMap[nums[i]] = i;
        }
        return std::vector<int>();
    }
};