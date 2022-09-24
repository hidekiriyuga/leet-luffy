class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        //vector<int> ans;
        int c;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i+1;
        }
        for(int i=0;i<nums.size();i++){
           c=target-nums[i];
            if(mp[c]!=0 && mp[c]!=i+1){

                return {i,mp[c]-1};
            }
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