class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int c;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i+1;
        }
        for(int i=0;i<nums.size();i++){
           c=target-nums[i];
            if(mp[c]!=0 && mp[c]!=i+1){
                ans.push_back(i);
                ans.push_back(mp[c]-1);
                return ans;
            }
        }
        return ans;
            
    }
};