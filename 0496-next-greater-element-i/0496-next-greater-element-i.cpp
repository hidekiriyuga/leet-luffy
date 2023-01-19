class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
        unordered_map<int, int> mp;
        vector<int> ans(num1.size(),-1);
        stack<int> s;
       // vector<int> com;
        for(int i=0;i<num2.size();i++){
            while(!s.empty()&& num2[i]>s.top()){
                mp[s.top()]=num2[i];
                s.pop();
            }
            s.push(num2[i]);
            }
        for(auto n:mp){
            cout<<n.second<<" ";
        }
        for(int i=0;i<num1.size();i++){
            if(mp.find(num1[i])!=mp.end()){
                ans[i]=mp[num1[i]];
            }
        }
        return ans;
    
            
    }
};