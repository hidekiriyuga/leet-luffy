class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
        int last=nums[n-1];
        long long cnt=0;
        for(int i=n-2;i>=0;i--){
            if(last<nums[i]){
               int t=nums[i]/last;
                if(nums[i]%last)t++;
                last=nums[i]/t;
                cnt+=t-1;
                
            }
            else last=nums[i];
        }
        return cnt;
    }
};