class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        int d = 0;
        for(auto i= 0; i<nums.size(); ++i)
        ++m[nums[i]];
        
        for(auto i : m)
        {
            if(i.second > 1)
            {
                d = i.first;
                break;
            }
        }
        return d;
    }
};