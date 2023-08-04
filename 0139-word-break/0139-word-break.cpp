class Solution {
public:
    bool wb(string s,int ind,vector<string>& wordDict,vector<int> &dp){
        if(ind>=s.size())return true;
        if(dp[ind]!=-1)return dp[ind]==1;
        int match=0;
        for(int i=0;i<wordDict.size();i++){
            string c=wordDict[i];
            if(s.compare(ind,c.size(),c)==0 && wb(s,ind+c.size(),wordDict,dp)){
                match=1;
                break;
            }
        }
        dp[ind]=match;
        return match==1;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size(),-1);
       // dp[s.size()]=1;
        return wb(s,0,wordDict,dp);
    }
};