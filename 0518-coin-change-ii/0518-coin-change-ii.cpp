class Solution {
public:
    int f(int ind,int val,vector<int>& coins,vector<vector<int>> &dp){
        if(ind==0){
            return (val%coins[0]==0);
            
        }
        if(dp[ind][val]!=-1)return dp[ind][val];
        int nt=f(ind-1,val,coins,dp);
        int t=0;
        if(coins[ind]<=val)t=f(ind,val-coins[ind],coins,dp);
        return dp[ind][val]=nt+t;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return f(n-1,amount,coins,dp);

    }
};