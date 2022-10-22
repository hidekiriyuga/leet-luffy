class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        if(nums[0]>0) return ans;
        if(nums.size()<3) return ans;
        for(int i=0;i<(int)(nums.size());i++){
            if(nums[i]>0){
                break;
            }
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
                int l=i+1,h=(int)(nums.size())-1,sum=0;
                while(l<h){
                        sum=nums[i]+nums[l]+nums[h];
                if(sum>0){
                    h--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                ans.push_back({nums[i], nums[l], nums[h]});
                //check for duplicacy
                int dupl_low=nums[l], dupl_high=nums[h];
                while(l<h&&nums[l]==dupl_low){
                    l++;
                }
                while(l<h&&nums[h]==dupl_high){
                    h--;
                }
                }
                }
            
        }
        return ans;
    }
};
/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        
        //just simple by using concept of two pointers and two sum problem or we may say that it is the extended version of 2 sum problem
        for(int i=0; i<nums.size(); i++){
            
            //negative number mil gya fix it and now uske agle wale ke index s two sum problem ka code 
            int low=i+1;
            int high=nums.size()-1;
            int sum=0;
            while(high>low){
                sum=nums[i]+nums[low]+nums[high];
                if(sum>0){
                    high--;
                }
                else if(sum<0){
                    low++;
                }
                //triplet mil gaya
                else{
                ans.push_back({nums[i], nums[low], nums[high]});
                //check for duplicacy
                int dupl_low=nums[low], dupl_high=nums[high];
                while(low<high&&nums[low]==dupl_low){
                    low++;
                }
                while(low<high&&nums[high]==dupl_high){
                    high--;
                }
                }
                
            }
            
        }
        return ans;
        
        
    }
};*/