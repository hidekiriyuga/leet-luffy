class Solution {
public:
    int solve(int ind,string s,unordered_map<string,int> &mp,vector<int> &dp){
        if(ind>=s.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        int ans=s.size();
        string c="";
            
        for(int curr=ind;curr<s.size();curr++){
            c.push_back(s[curr]);
            int cnt=((mp.count(c))?0:c.size())+solve(curr+1,s,mp,dp);
            ans=min(ans,cnt);
        }
        return dp[ind]=ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        vector<int> dp(s.size(),-1);
        unordered_map<string,int> mp;
        for(auto c:dictionary)mp[c]++;
        int ans=solve(0,s,mp,dp);
        return ans;
    }
};