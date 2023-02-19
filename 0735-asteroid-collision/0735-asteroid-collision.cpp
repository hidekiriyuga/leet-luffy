class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
         stack<int> st;
        for(auto x:ast){
            if(st.empty()){
                st.push(x);
            }
            else{
               if(x>0){
                   st.push(x);
               }
               else{
                   while(!st.empty() && st.top()>0 && st.top()<abs(x)){
                       st.pop();
                   }
                   if(!st.empty() && st.top() == abs(x)){
                       st.pop();
                       continue;
                   }
                   if(!st.empty() && st.top()>abs(x)){
                       continue;
                   }
                   st.push(x);
               }
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};