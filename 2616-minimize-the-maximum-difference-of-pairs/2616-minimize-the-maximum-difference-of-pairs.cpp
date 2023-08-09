class Solution {
public:
    bool found(int t,int p,vector<int>& nums){
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i]-nums[i+1])<=t){
                cnt++;
                i++;
            }
            
        
        if(cnt==p)return true;
        }
        return false;
    }
    int minimizeMax(vector<int>& nums, int p) {
       // int n=nums.size();
        if(p==0)return 0;
        sort(nums.begin(),nums.end());
        int r=1e+9,l=0,res=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(found(mid,p,nums)){
                res=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return res;
    }
};