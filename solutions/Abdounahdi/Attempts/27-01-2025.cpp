#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PB push_back
typedef long long ll;

bool comp (int a, int b) {
    return a > b;
}
class Solution {
public:



    // bool solve(int target , int index , vector<int> arr , int sum ){
        
    //     if (sum > target) return false ; 
    //     if (index>= arr.size() ) return false ; 
    //     if (target == sum) return true ; 
        
    //     return solve(target , index + 1 , arr , sum + arr[index]) || solve(target , index + 1 , arr , sum); 
    // }

    bool canPartition(vector<int>& nums) {

    //     int sum = 0 ; 

    //     REP(i , 0 , nums.size() ){
    //         sum+=nums[i] ; 
    //     }

    //     if (sum%2 != 0 ){
    //         return false ; 
    //     }

    //     sort(nums.begin(), nums.end() , comp);

    //     return solve(sum/2 , 0 , nums , 0) ;

        int sum = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            sum+=nums[i] ; 
        }

        if ((sum % 2) == 0){
            return true ; 
        }else{
            return false ; 
        }
    }
};
