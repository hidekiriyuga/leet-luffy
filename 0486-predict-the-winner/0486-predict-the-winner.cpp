class Solution {
public:
    int solve(vector<int>& nums,int i,int j){
        if(i>j)return 0;
        int ch1=nums[i]+min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int ch2=nums[j]+min(solve(nums,i+1,j-1),solve(nums,i,j-2));
        return max(ch1,ch2);
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int sum=0,score=0;
        for(int it:nums){
            sum+=it;
        }
        score=solve(nums,0,n-1);
        if(score>=sum-score)return true;
        return false;
    }
};