class Solution {
public:
    int countOdds(int low, int high) {
        int c=high-low+1;
        if(c%2==0)return c/2;
        else if(low%2==1 || high%2==1)return ((c-1)/2 +1);
        else {
        return (high-low)/2;
        }
    }
};