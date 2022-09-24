class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        //vector<int> ans;
        int c;
        
        for(int i=0;i<nums.size();i++){
           c=target-nums[i];
            if(mp.count(c)){

                return {i,mp[c]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
            /*vector twoSum(vector& nums, int target) {
   unordered_mapans;
   for(int i=0;iint k=target-nums[i];
      if(ans.count(k)){
           return {ans[k],i};
   }
    ans[nums[i]]=i;
}
  return {-1,-1};
}*/
    }
};