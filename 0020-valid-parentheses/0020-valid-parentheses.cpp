class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(st.empty())
            {
                st.push(s[i]);
            }
            else{
            if(s[i]=='{' || s[i]=='(' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')' && st.top()!='('){
                return 0;
            }
            else if(s[i]==']' && st.top()!='['){
                return 0;
            }
            else if(s[i]=='}' && st.top()!='{'){
                return 0;
            }
            else{
                st.pop();
            }
            }
            
        }
        if(!st.empty())return 0;
        return 1;
    }
};