class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m=gain[0],ans=gain[0];
        for(int i=1;i<gain.size();i++){
            int s=m+gain[i];
            if(s>ans)ans=s;
            m=s;
        }
        if(ans<0)return 0;
        return ans;
    }
};