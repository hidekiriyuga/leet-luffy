class Solution {
public:
    int nicearr(vector<int>& nums, int k){
        if(k<0)return 0;
        int ans=0,i=0,j=0,cnt=0;
        while(j<nums.size()){
            if(nums[j]%2!=0)cnt++;
            while(cnt>k){
                if(nums[i]%2!=0)cnt--;
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return nicearr(nums,k)-nicearr(nums,k-1);
    }
};