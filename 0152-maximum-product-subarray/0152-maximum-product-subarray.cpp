class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p1=nums[0],p2=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
        int t=max({nums[i],nums[i]*p1,nums[i]*p2});
        p2=min({nums[i],nums[i]*p1,nums[i]*p2});
        p1=t;
        res=max(res,p1);
        }
        
return res;
    }
};
/*p1 6 
p2 2*/