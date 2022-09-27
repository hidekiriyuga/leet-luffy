class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       // int size=nums.size();
        vector<int> a(nums.size(),0);
        int pos=0,neg=1;
        for(auto n: nums){
            if(n>0){
                a[pos]=n;pos+=2;
            }
            else{
                a[neg]=n;
                neg+=2;
            }
        }
        return a;
        
    }
};