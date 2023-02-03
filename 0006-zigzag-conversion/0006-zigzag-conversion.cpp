class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        vector<string> ans(numRows);
        int inc=-1,row=0;
        for(int i=0;i<size(s);i++){
            if(i%(numRows-1)==0)inc*=-1;
            ans[row].push_back(s[i]);
            row+=inc;
        }
        string n;
        for(auto s:ans)n+=s;
        return n;
        
    }
};