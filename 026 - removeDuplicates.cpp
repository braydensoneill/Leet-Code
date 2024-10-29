class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                // overwriting values at the start (others dont matter because only first k values in array are checked)
                nums[k] = nums[i]; 
                k++;
            }
        }
        return k;
    }
};