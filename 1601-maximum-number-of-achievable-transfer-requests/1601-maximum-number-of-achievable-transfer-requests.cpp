class Solution {
public:
    int ans=0;
    void solve(int i,vector<vector<int>>& requests,int cnt,vector<int> &temp){
        if(i==requests.size()){
            for(auto it:temp)if(it!=0)return;
            ans=max(ans,cnt);
            return;
        }
        solve(i+1,requests,cnt,temp);
        temp[requests[i][0]]--;
        temp[requests[i][1]]++;
        solve(i+1,requests,cnt+1,temp);
        temp[requests[i][1]]--;
        temp[requests[i][0]]++;
        
        
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
       vector<int> temp(n,0);
        solve(0,requests,0,temp);
        return ans;
    }
};