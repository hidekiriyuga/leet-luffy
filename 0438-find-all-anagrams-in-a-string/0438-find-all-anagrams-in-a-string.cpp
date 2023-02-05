class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> fp(26,0),fs(26,0),ans;
        for(char c:p)fp[c-'a']++;
        int i=0,j=0;
        while(j<s.size())
        {
            fs[s[j]-'a']++;
            if(j-i+1==p.size()){
                if(fp==fs)ans.push_back(j-p.size()+1);
            }
            if(j-i+1<p.size())j++;
            else{
                fs[s[i]-'a']--;
                i++;j++;
            }
        }
        return ans;
    }
};