class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0,n=nums.size(),end=0,far=0;
        for(int i=0;i<n-1;i++){
            far=max(far,i+nums[i]);
            if(i==end){
                ans++;
                end=far;
            }
        }
        return ans;
    }
};