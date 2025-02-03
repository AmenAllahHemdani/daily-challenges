#define REP(i,a,b) for (int i = a; i < b; i++) 

class Solution {
public:

    // int s = 0; 

    // void solve(int m,int n){
    //     if((m==1) && (n==1)){
    //         s++;
    //         return;
    //     }else if(m==1){
    //         solve(m,n-1);
    //     }else if(n==1) { 
    //         solve(m-1,n);
    //     }else{
    //         solve(m,n-1);
    //         solve(m-1,n);
    //     }
    // }

    int uniquePaths(int m, int n) {
        int grid[m][n] ; 
    
        REP(i,0,m){
            REP(j,0,n){
                if (i == 0 || j == 0){
                    grid[i][j] = 1 ; 
                }else{
                    grid[i][j] = grid[i][j-1] + grid[i-1][j] ; 
                }
            }
        }

       // REP(i,0,m){
       //     REP(j,0,n){
       //         cout << grid[i][j] << " " ; 
       //     }
       //     cout << endl ; 
       // }

      
        return grid[m-1][n-1] ; 
    }
};
