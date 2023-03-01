class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> p;
        for(auto a:nums){
            p.push(a);
        }
        vector<int> ans;
        while(!p.empty()){
            ans.push_back(p.top());
            p.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};