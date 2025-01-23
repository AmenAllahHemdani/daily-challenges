class Solution {
public:

    int s = 0; 

    void path(int m,int n){
        if(m==1 && n==1){
            s++;
            return;
        }else if(m==1){
            path(m,n-1);
        }else if(n==1) {
            path(m-1,n);
        }else{
            path(m,n-1);
            path(m-1,n);
        }
    }

    int uniquePaths(int m, int n) {
        path(m,n);
        return s;
    }
};
