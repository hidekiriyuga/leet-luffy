class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans;
        
       int cnt=0,flag=1;
        sort(nums.begin(),nums.end());
        if(n<3){
            if(n==2){
            if(nums[0]==nums[1])return {nums[0]};
            else return nums;}
            else return nums;
        
        }
        
         
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                    cnt++;
                    if((cnt+1)>(n/3) && flag){
                        ans.push_back(nums[i]);flag=0;
                    }
            }
            else{
                cnt=0;flag=1;
            }
        }
        //if(ans.size()==0)return {-1};
        return ans;
    }
};