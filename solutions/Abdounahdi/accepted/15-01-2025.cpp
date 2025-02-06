#define REP(i,a,b) for (int i = a; i < b; i++)
class Solution {
public:
    int climbStairs(int n) {
        if (n==0) return 0 ; 
        if (n==1) return 1 ; 
        if (n==2) return 2 ; 
        
        vector<int> dp(n+1,-1 ) ; 

        dp[0] = 0 ; 
        dp[1] = 1 ; 
        dp[2] = 2 ; 

        REP(i , 3 , n+1){
            dp[i]= dp[i-1]+dp[i-2]; 
        }

        return dp[n]; 
    }
};
