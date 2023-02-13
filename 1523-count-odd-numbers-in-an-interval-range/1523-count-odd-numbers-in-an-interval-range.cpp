class Solution {
public:
    int countOdds(int low, int high) {
        int c=(high-low)/2;
        //if(c%2==0)return c/2;
        if(low%2==1 || high%2==1)return c+1;
        return c;
        
    }
};