class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int a:nums){
            q.push(a);
        }
        int t;
        while(k--){
            t=q.top();
            q.pop();
        }
        return t;
    }
};