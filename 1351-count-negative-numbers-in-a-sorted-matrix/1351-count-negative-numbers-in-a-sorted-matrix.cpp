class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ro=grid.size(),c=grid[0].size();
        int res=0,e=c-1;
        for(int row=0;row<ro;row++){
            if(grid[row][0]<0){
                res+=c;
                continue;
            }
            if(grid[row][c-1]>=0)continue;
            int l=0,r=e;
            while(l<=r){
                int m=(l+r)/2;
                if(grid[row][m]>=0)l=m+1;
                else r=m-1;
            }
            res+=c-l;e=l;
        }
        return res;
    }
};