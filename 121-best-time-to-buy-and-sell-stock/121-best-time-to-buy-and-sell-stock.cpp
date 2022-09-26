class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxp=0;
        for(int i=0;i<prices.size();i++){
            if(mini>prices[i])mini=prices[i];
            if(maxp<prices[i]-mini)maxp=prices[i]-mini;
        }
        return maxp;
    }
};