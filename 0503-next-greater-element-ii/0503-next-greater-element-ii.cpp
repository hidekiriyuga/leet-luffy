class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=2*n-1;i>=0;i--){
            while(!s.empty()&& s.top()<=arr[i%n]){
                //ans[i%n]=s.top();
                s.pop();
            }
            if(i<n){
                if(!s.empty())ans[i]=s.top();
            }
            s.push(arr[i%n]);
        }
        return ans;
    }
};