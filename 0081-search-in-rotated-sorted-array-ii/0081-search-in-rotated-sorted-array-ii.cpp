class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
    int l=0,r=nums.size()-1; 
        while(l<r && nums[l]==nums[l+1])
        l++;
        while(r>l && nums[r]==nums[r-1])r--;
        while(l<=r){
            int mid=(l+r)/2;
            if(target==nums[mid])return 1;
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target&&nums[mid]>=target)r=mid-1;
                else l=mid+1;
            }
            else{
                if(nums[mid]<=target &&nums[r]>=target)l=mid+1;
                else r=mid-1;
            }
        }
        return 0;
    }
};