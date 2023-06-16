class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> vis(n,vector<int>(m,0));
	    vector<vector<int>> dis(n,vector<int>(m));
	    queue<pair<pair<int,int>,int>> q;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==0){
	                q.push({{i,j},0});
	                vis[i][j]=1;
	                dis[i][j]=0;
	            }
	        }
	    }
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
	            int nc=c+dc[i];
	            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc]&& grid[nr][nc]==1){
	                q.push({{nr,nc},d+1});
	                dis[nr][nc]=d+1;
	                vis[nr][nc]=1;
            }
        }
    }
        return dis;
    }
};