//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size(),m=grid[0].size(),days=0,total=0,cnt=0;
        queue<pair<int,int>> rot;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0)total++;
                if(grid[i][j]==2)rot.push({i,j});
            }
        }
        int drow[4]={0,0,1,-1};
        int dcol[4]={-1,1,0,0};
        while(!rot.empty()){
            int k=rot.size();
            cnt+=k;
            while(k--){
                int x = rot.front().first, y = rot.front().second;
                rot.pop();
                for(int i = 0; i < 4; ++i){
                    int nx = x + drow[i], ny = y + dcol[i];
                    if(nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;
                    rot.push({nx, ny});
            }
            }
            
            if(!rot.empty())days++;
            
        }
        if(cnt==total)return days;
        else return -1;
    
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends