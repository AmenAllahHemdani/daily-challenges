class Solution {
public:
    bool Part(int s, vector<int> nums,int index,int sum){
        if(sum > s || index>=nums.size()) return false;
        if(sum == s) return true;
        return Part(s,nums,index+1,sum+nums[index]) || Part(s,nums,index+1,sum);
    }

    bool canPartition(vector<int> nums) {
        int s = 0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%2!=0) return false;
        return Part(s/2,nums,0,0);
    }
};
