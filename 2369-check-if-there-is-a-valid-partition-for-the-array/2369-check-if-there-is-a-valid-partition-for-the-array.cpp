class Solution {
public:
    bool solve(int i,int n,vector<int>& nums,vector<int> &dp){
        if(i>=n)return 1;
        if(dp[i]!=-1)return dp[i];
        if(i+1<n && nums[i]==nums[i+1]){
            dp[i]=solve(i+2,n,nums,dp);
            if(dp[i])return 1;
        
        if(i+2<n&& nums[i]==nums[i+2]){
            dp[i]=solve(i+3,n,nums,dp);
            if(dp[i])return 1;
        }
        }
        if(i+2<n&& nums[i+2]-nums[i]==2&& nums[i+1]-nums[i]==1){
            dp[i]=solve(i+3,n,nums,dp);
            if(dp[i])return 1;
        }
        return dp[i]=0;
    }
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return solve(0,n,nums,dp);
    }
};