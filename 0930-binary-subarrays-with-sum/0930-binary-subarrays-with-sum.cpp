class Solution {
public:
    int subar(vector<int>&nums, int goal){
      if(goal<0)
            return 0;
        int sum=0;
        int i=0;
        int j=0;
        int res=0;
        while(j<nums.size())
        {

            sum+=nums[j]; 
            while(sum>goal)
            {
                sum-=nums[i];
                i++;
            }
            res+=(j-i+1);
            
            j++;
        }
        
        return res;
  }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
                return subar(nums,goal)-subar(nums,goal-1);

    }
};