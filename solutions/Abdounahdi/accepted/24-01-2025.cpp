class Solution {
public:

    int solve(int i , vector<int>& days , vector<int>& costs , vector<int>& dp){
        
        if (days.size() <= i ) {
            return 0; 
        }
    
        // if(days[i]<=daysPaid) {
        //     solve( i + 1 , days, costs , daysPaid , cost ,res , dp ) ; 
        // }

        if (dp[i]!=-1){
            return dp[i] ; 
        }

        int fCost = costs[0] + solve(i+1 , days , costs  , dp) ; 
        int j = i ; 
        while(j<days.size()&& days[j]< days[i]+7){
            j++; 
        }
        int sCost = costs[1] + solve(j , days , costs , dp) ; 
        j=i ; 
        while (j<days.size() && days[j]<days[i]+30){
            j++ ; 
        }
        int tCost = costs[2] + solve(j , days , costs , dp) ; 


        dp[i] = min(fCost , min(sCost , tCost )) ; 
        return dp[i]; 
        
        
    
    }

    // void solve(int i , vector<int>& days , vector<int>& costs , int daysPaid , int cost , int &res){
        
    //     if (days.size() <= i ) {
    //         res = min(cost , res) ; 
    //         return ; 
    //     }
    
    //     if(days[i]<=daysPaid) {
    //         solve( i + 1 , days, costs , daysPaid , cost ,res ) ; 
    //     }
        
    //     solve(i+1 , days , costs , daysPaid , cost + costs[0] , res) ; 
    //     solve(i+1 , days , costs , (days[i] + 6) , cost + costs[1] , res) ; 
    //     solve(i+1 , days , costs , (days[i] + 29) , cost + costs[2] , res) ; 
    
    // }

    int mincostTickets(vector<int>& days, vector<int>& costs) {

        int cost = 0 ; 
        int daysPaid = 0 ; 
        int res = INT_MAX ;

        vector<int> dp(days.size() , -1) ;

        return solve(0, days, costs, dp);

    }
};
