//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
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

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends