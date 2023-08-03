class Solution {
public:
    vector<string> res;
    void back(int i,string curr,string digits){
        vector<string> s={
            "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
        };
        if(digits.size()==curr.size()){
            res.push_back(curr);
            return;
        }
        for(auto it:s[digits[i]-'0']){
            curr.push_back(it);
            back(i+1,curr,digits);
            curr.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(!digits.size())return res;
        //res.push_back("");
        string curr="";
        back(0,curr,digits);
        return res;
    }
};