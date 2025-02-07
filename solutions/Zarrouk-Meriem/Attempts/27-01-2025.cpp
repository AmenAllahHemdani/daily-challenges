class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0)
            return false;
        int target = sum / 2;

        return canFindSubset(nums, 0, target);
    }
    bool canFindSubset(vector<int>& nums, int index, int target) {
        if (target == 0)
            return true; 
        if (index >= nums.size() || target < 0)
            return false; 

        
        return canFindSubset(nums, index + 1, target - nums[index]) ||
               canFindSubset(nums, index + 1, target);
    }
};
