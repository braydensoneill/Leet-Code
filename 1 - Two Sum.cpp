class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Loop through the nums vector
        for (int i = 0; i < nums.size(); i++) {

            // Loop through the nums array, ignoring everything before i (pair already checked)
            for (int j = i + 1; j < nums.size(); j++) {

                // If two numbers equal the target, return their positions
                if (nums[i] + nums[j] == target) {
                   return {i, j}; 
                }
            }
        }

        // No answer found
        return {};
    }
};