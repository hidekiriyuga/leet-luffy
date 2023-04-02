class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size(),m=potions.size();
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            int l=0,r=m-1,mid,cnt=0;
            while(l<=r){
                mid=(l+r)/2;
                if(long(spells[i])*potions[mid]>=success)cnt+=r-mid+1,r=mid-1;
                else l=mid+1;
                
            }
            ans.push_back(cnt);

        }
        return ans;
    }
};