class Solution {
public:

    void solve(int i , vector<int>& days , vector<int>& costs , int daysPaid , int cost , int &res){
        
        if (days.size() <= i ) {
            res = min(cost , res) ; 
            return ; 
        }
    
        if(days[i]<=daysPaid) {
            solve( i + 1 , days, costs , daysPaid , cost ,res ) ; 
        }
        
        solve(i+1 , days , costs , daysPaid , cost + costs[0] , res) ; 
        solve(i+1 , days , costs , (days[i] + 6) , cost + costs[1] , res) ; 
        solve(i+1 , days , costs , (days[i] + 29) , cost + costs[2] , res) ; 
    
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {

        int cost = 0 ; 
        int daysPaid = 0 ; 
        int res = INT_MAX ;

        solve(0 , days, costs , daysPaid , cost , res ) ; 

        return res ; 

    }
};
