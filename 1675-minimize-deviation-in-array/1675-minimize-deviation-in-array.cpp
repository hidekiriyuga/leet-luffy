class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                nums[i]*=2;
            }
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        int devi=maxi-mini;
        priority_queue<int> q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        while((q.top())%2==0){
            int t=q.top();
            q.pop();
            devi=min(devi,t-mini);
            t/=2;
                mini=min(mini,t);
            q.push(t);
        }
        devi=min(devi,q.top()-mini);
        return devi;
        
    }
};