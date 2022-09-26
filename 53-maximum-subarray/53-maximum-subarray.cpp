class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //first 3 loop solution o(n^3) 
        int sum=0;
        int maxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            if(sum<0)sum=0;
        }
        return maxsum;
    }
};