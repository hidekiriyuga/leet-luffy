class Solution {
public:
    vector<vector<int>> dfs(int r,int c,vector<vector<int>> &image,vector<vector<int>> &ans,int oldcol,int color,int dr[],int dc[]){
        ans[r][c]=color;
        int n = image.size();
        int m = image[0].size(); 
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m &&image[nr][nc]==oldcol && ans[nr][nc]!=color){
                dfs(nr,nc,image,ans,oldcol,color,dr,dc);
            }
        }
        return ans;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int incol=image[sr][sc];
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        return dfs(sr,sc,image,ans,incol,color,dr,dc);
    }
};