class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //4321567 4321765 5671234
        k%=nums.size();
        reverse(nums.begin(),nums.end()-k);
        //cout<<nums[1]<<nums[2]<<nums[3];
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};