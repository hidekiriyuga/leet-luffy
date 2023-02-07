class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int i=0,j=0,ans=0;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            if(mp.size()>2){
                if(mp[fruits[i]]==1)mp.erase(fruits[i]);
            
            else{
                mp[fruits[i]]--;
            }
            i++;
            }
            ans=max(ans,j-i+1);
            //return ans;
            j++;
        
        }
    
        
        return ans;
    }
};