class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long result = 0;
        stack<int> inc;
        stack<int> dec;
        for(int i = 0 ; i <= nums.size() ; i ++){
            while(!inc.empty() && ( i == nums.size() || nums[inc.top()] < nums[i])){
                int currIndex = inc.top();inc.pop();
                int leftBound = inc.empty() ? -1 : inc.top(); 
                int rightBound = i;
                result += (currIndex - leftBound) * (rightBound - currIndex) * (long) nums[currIndex];                
            }
            while(!dec.empty() && (i == nums.size() || nums[dec.top()] > nums[i])){
                int currIndex =dec.top(); dec.pop();
                int leftBound = dec.empty()? -1 : dec.top(); 
                int rightBound = i;
                result -= (currIndex - leftBound) * (rightBound - currIndex) * (long) nums[currIndex];
            }
            inc.push(i);
            dec.push(i);
        }
        
        return result;
    }
};