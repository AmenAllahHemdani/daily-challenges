class Solution {
public:
    int maxMoney(vector<int>& memo, int n, vector<int>& dp) {
        if(n < 0) return 0;

        if(dp[n] != -1) return dp[n];

        return dp[n] = max(memo[n] + maxMoney(memo, n-2, dp), maxMoney(memo, n-1, dp));
    }


    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        vector<int> memo1(nums.begin()+1, nums.end()), memo2(nums.begin(), nums.end()-1);

        int n = memo1.size();
        vector<int> dp(n, -1);

        int value1 = maxMoney(memo1, n-1, dp);
        fill(dp.begin(), dp.end(), -1);
        int value2 = maxMoney(memo2, n-1, dp);

        return max(value1, value2);
    }
};
