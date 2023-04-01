class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int mid=(l+h)/2;
        while(l<=h){
                if(nums[mid]==target)return mid;
                else if(nums[mid]<target)l=mid+1;
                else h=mid-1;
                mid=(l+h)/2;
        }
                return -1;
    }
};