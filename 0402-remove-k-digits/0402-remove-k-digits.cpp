class Solution {
public:
    string removeKdigits(string num, int k) {
     int n=num.size();
     if(n<= k)return "0";
     stack<char> s;
        for(auto c:num){
            while(!s.empty() && k>0 && c<s.top()){
                k--;s.pop();
            }
            if(!s.empty() || c!='0')s.push(c);
        }
        while(!s.empty()&& k--){
            s.pop();
        }
        if(s.empty())return "0";
        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};