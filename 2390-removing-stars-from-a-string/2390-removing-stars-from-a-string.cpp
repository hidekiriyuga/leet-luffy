class Solution {
public:
    string removeStars(string str) {
        stack<char> s;
        for(char c:str){
            if(c!='*')s.push(c);
            else s.pop();
        }
        string ans;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};