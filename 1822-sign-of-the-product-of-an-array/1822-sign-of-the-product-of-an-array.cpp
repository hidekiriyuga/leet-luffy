class Solution {
public:
    int arraySign(vector<int>& nums) {
        int oe=0;
        for(int n:nums){
            if(n==0)return 0;
            if(n<0)oe++;
            //else oe++;
        }
        if(oe%2==0)return 1;
        else return -1;
    }
};