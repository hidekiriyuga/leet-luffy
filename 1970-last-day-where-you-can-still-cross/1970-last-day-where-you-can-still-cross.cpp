class Solution {
public:
    bool ispos(int row,int col,vector<vector<int>>& cells,int day){
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        vector<vector<bool>> grid(row,vector<bool>(col,0));
        
        for(int i=0;i<day;i++){
            grid[cells[i][0]-1][cells[i][1]-1]=1;
        }
        queue<pair<int,int>> q;
        for(int c=0;c<col;c++){
            if(grid[0][c]==0){
                q.push({0,c});
                grid[0][c]=1;
            }
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            if(r==row-1)return true;
            for(int i=0;i<4;i++){
                int nr=r+dr[i],nc=c+dc[i];
                if(nr>=0&& nr<row&& nc>=0&&nc<col&&!grid[nr][nc]){
                    grid[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int left=1,right=cells.size(),ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(ispos(row,col,cells,mid)){
                ans=mid;
                left=mid+1;
            }
            else right=mid-1;
        }
        return ans;
    }
};