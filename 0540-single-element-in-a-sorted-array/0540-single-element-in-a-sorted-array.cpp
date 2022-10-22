class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int l=0,r=n-1,mid=(l+r)/2;
        while(l<r){
            if(mid%2==0){
                if(nums[mid]!=nums[mid+1])r=mid;
                else l=mid+1;
            }
            else{
                if(nums[mid]!=nums[mid-1])r=mid;
                else l=mid+1;
            }
            mid=(l+r)/2;
        }
        return nums[mid];
    }
};