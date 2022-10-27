class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int s=0,e=0;
        for(int i=0;i<nums.size();i++){
            s=max(s,nums[i]);
            e+=nums[i];
        }
        while(s<e){
            int mid=s+(e-s)/2;
            int sum=0,piece=1;
            for(auto num:nums){
                if(sum+num>mid){
                    sum=num;
                    piece++;
                }
                else sum+=num;
            }
                if(piece>k)s=mid+1;
                else e=mid;
            
        }
        return s;
    }
};