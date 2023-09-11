class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>> ans;
        vector<vector<int>> mp(n+1);
        for(int i=0;i<n;i++){
            int len=groupSizes[i];
            mp[len].push_back(i);
            if(len==mp[len].size()){
                ans.push_back(mp[len]);
                mp[len]={};
            }
        }
        return ans;
    }
};