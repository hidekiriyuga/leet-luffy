class Solution {
public:
    bool check(vector<int>& nums) {
        int minIndex = 0,n = nums.size();
          for (int i = 1; i < n; i++) {
            if (nums[i] >= nums[i-1]) {
                continue;
             } else {
                 minIndex = i;
                 break;
            }
        }

        for (int i = minIndex; i < (minIndex + n); i++) {
            if (i == minIndex) {
                continue;
            } else {
                if (nums[i%n] < nums[(i-1)%n]) return false;
            }
        }
        return true;
    }

    
};