class Solution {
public:
void dfs(int r,int c,vector<vector<int>> &vis,vector<vector<int>> &grid){
        vis[r][c]=1;
        int n = grid.size();
        int m = grid[0].size();
    int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if( nr>=0 &&nr<n && nc>=0 &&nc<m &&!vis[nr][nc]&& grid[nr][nc]==1){
                //vis[nr][nc]=1;
                dfs(nr,nc,vis,grid);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            if(!vis[0][j] && grid[0][j]==1){
                dfs(0,j,vis,grid);
            }
            if(!vis[n-1][j] && grid[n-1][j]==1){
                dfs(n-1,j,vis,grid);
                
            }
            
        }
        for(int i=0;i<n;i++){
            if(!vis[i][0] && grid[i][0]==1){
                dfs(i,0,vis,grid);
            }
            if(!vis[i][m-1] && grid[i][m-1]==1){
                dfs(i,m-1,vis,grid);
                
            }
            
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&& !vis[i][j]){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};