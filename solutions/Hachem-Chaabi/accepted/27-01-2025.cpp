class Solution {
public:
    vector<vector<int>> dp;

    bool isSubsetSum(int n, vector<int>& nums, int sum) {
        if (sum == 0) return true;
        if (n == 0) return false;

        if (dp[n][sum] != -1) return dp[n][sum];

        if (nums[n-1] > sum) 
            return dp[n][sum] = isSubsetSum(n-1, nums, sum);
        
        return dp[n][sum] = isSubsetSum(n-1, nums, sum) || isSubsetSum(n-1, nums, sum - nums[n-1]);
    }

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0) return false;

        int target = sum / 2;
        int n = nums.size();
        
        dp.assign(n + 1, vector<int>(target + 1, -1));
        
        return isSubsetSum(n, nums, target);
    }
};
