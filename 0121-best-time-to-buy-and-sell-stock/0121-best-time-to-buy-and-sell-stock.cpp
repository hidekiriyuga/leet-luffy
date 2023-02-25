class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxp=0,c=0;
        for(int i=0;i<prices.size();i++){
            if(mini>prices[i])mini=prices[i];
            c=prices[i]-mini;
            if(maxp<c)maxp=c;
        }
        return maxp;
    }
};