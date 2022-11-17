class Solution {
public:
    int maxDepth(string s) {
        vector<int> v;
        int c=0,ans=0;
        for(int i=0;i<s.length();i++){
            /*if(v.empty()){
                c=0;
            }*/
            if(s[i]=='(')v.push_back(s[i]);
            if(s[i]==')')
            {
                
                c=v.size();
                ans=max(ans,c);
                v.pop_back();
                
            }
            
        }
        return (ans);
    }
};