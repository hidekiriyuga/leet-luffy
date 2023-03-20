class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)return 0;
        map<char,int> mp;
        int i=0,j=0,ans=INT_MIN;
        while(j<s.length()){
            mp[s[j]]++;
            if(mp.size()==j-i+1)
                ans=max(ans,j-i+1);
            if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        mp.erase(s[i]);
                
                i++;
            }
            }
            j++;
        }
        return ans;
    }
};