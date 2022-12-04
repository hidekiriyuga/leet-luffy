class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            vector<int> f(26,0);
            for(int j=i;j<s.length();j++){
                f[s[j]-'a']++;
                ans+=beauty(f);
            }
            }
        return ans;
    }
    int beauty(vector<int> f){
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i:f){
            if(i==0)continue;
            mini=min(i,mini);
            maxi=max(maxi,i);
        }
        return maxi-mini;
    }
};