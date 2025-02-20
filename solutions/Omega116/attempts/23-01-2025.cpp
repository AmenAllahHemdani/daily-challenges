class Solution {
public:
    int uniquePaths(int m, int n) {
        int c = 0;
        
        if (n==1 && m==1) {
            
            return 1;
        }
        else {
        if (m > 1) {

            c+= uniquePaths(m-1,n);
            
        }
        if (n>1) {
            c+= uniquePaths(m,n-1);
            
        }
        return c;
    }
    }
};
