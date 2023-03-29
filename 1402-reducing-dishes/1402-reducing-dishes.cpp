class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int ans=0,total=0;
        sort(satisfaction.begin(),satisfaction.end());
        for(int i=satisfaction.size()-1;i>=0&& satisfaction[i]>-total;i--){
            total+=satisfaction[i];
            ans+=total;
        }
        return ans;
    }
};