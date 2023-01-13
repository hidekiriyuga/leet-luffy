//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

    string infixToPostfix(string s) {
        // Your code here
        stack<char> st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans+=s[i];
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')') {
      while (st.top() != '(') {
        ans += st.top();
        st.pop();
      }
      st.pop();
    }
    else{
        while (!st.empty() && prec(s[i]) <= prec(st.top())) {
        ans += st.top();
        st.pop();
      }
      st.push(s[i]);

    }
            
        }
        while (!st.empty()) {
    ans += st.top();
    st.pop();
  }
  return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends