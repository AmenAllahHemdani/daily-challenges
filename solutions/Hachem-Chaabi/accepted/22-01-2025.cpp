class Solution {
public:
    int minCoins(vector<int>& coins, int amount, vector<int>& dp) {
        if(amount == 0) return 0;

        if(amount < 0) return INT_MAX;

        if(dp[amount] != -1) return dp[amount];

        int minCoin = INT_MAX;
        for(int i = 0; i < coins.size(); i++ ) {
            int res = minCoins(coins, amount - coins[i], dp);
            if(res != INT_MAX) {
                minCoin = min(minCoin, 1 + res);
            }
        }
        dp[amount] = minCoin;
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1);
        int res = minCoins(coins, amount, dp);
        return res == INT_MAX ? -1 : res;
    }
};
