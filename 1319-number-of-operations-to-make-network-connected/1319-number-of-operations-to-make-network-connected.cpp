class Solution {
public:
    void dfs(vector<vector<int>> &edge,vector<bool> &vis,int src){
        vis[src]=true;
        for(auto i:edge[src]){
            if(!vis[i]){
                dfs(edge,vis,i);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;
        vector<vector<int>> edge(n);
        vector<bool> vis(n,false);
        for(auto v:connections){
            edge[v[0]].push_back(v[1]);
            edge[v[1]].push_back(v[0]);
        }
        int k=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(edge,vis,i);
                k++;
            }
        }
        return k-1;
    }
};