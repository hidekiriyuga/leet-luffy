class Solution {
public:
    void solve(vector<int>& nums,vector<int>& temp,vector<vector<int>> &ans,int i){
        ans.push_back(temp);
        for(int j=i;j<nums.size();j++){
            temp.push_back(nums[j]);
            solve(nums,temp,ans,j+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        solve(nums,temp,ans,0);
        return ans;
    }
};