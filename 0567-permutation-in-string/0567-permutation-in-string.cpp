class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> fs1(26,0);vector<int> fs2(26,0);
        for(auto c:s1)fs1[c-'a']++;
        
        int i=0,j=0;
        while(j<s2.size()){
            fs2[s2[j]-'a']++;
            if(j-i+1==s1.size()){
                if(fs1==fs2)return true;
            }
            if((j-i+1)<s1.size())j++;
            else{
                fs2[s2[i]-'a']--;
                i++;j++;
            }
            
        }
        return false;
    }
};