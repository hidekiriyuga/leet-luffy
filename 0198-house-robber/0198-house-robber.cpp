unordered_map<int,int> mp;

class Solution {
public:
    int rob(vector<int>& nums) {
        mp.clear();       
        return solve(nums,0); 
        //return c;
    }
    int solve(vector<int> a,int i){
        int n=a.size();
    if(i>=n)
    return 0; 
    else{
        if(mp.find(i) != mp.end())
        return mp[i];
        else{
        mp[i]=max(a[i]+solve(a,i+2),solve(a,i+1));
        return mp[i];
        }
    }
    }
};