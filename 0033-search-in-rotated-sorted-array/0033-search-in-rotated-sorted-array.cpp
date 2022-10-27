class Solution {
public:
    int search(vector<int>& nums, int target) {
        //int l=0,h=nums.size()-1;
        //int mid;
        //striver
       /* while(l<=h){
            mid=(l+h)/2;
            if(nums[mid]==target)return mid;
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && nums[mid]>=target)h=mid-1;
                else l=mid+1;
            }
            else{
                if(nums[mid]<=target && nums[h]>=target)l=mid+1;
                else h=mid-1;
            }
        }
        return -1;
    }*/
        
        int pi=pivot(nums);
        if(pi==-1)return bsearch(nums,target,0,nums.size()-1);
        if(target==nums[pi])return pi;
        if(target>=nums[0])
        return bsearch(nums,target,0,pi-1);
        else
        return bsearch(nums,target,pi+1,nums.size()-1);
    }
        //kunal
    int bsearch(vector<int>& nums, int target,int l,int h){
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target)h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    int pivot(vector<int> arr){
        int l=0,h=arr.size()-1,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(mid<h && arr[mid]>arr[mid+1])return mid;
            if(mid>l&&arr[mid-1]>arr[mid])return mid-1;
            if(arr[mid]<=arr[l])h=mid-1;
            else l=mid+1;

        }
        return -1;
    }
};