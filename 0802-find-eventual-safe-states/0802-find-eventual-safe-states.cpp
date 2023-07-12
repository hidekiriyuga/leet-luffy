class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<bool> &vis,vector<bool> &pathVis,vector<bool> &check){
        vis[node]=1;
        pathVis[node]=1;
        check[node]=0;
        for(auto it:graph[node]){
            if(!vis[it]){
                if(dfs(it,graph,vis,pathVis,check))
                {
                    check[node]=0;
                
                return true;
                    
                }
            }
            else if(pathVis[it]){check[node]=0;
                
                return true;}
        }
        check[node]=1;
        pathVis[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      int V=graph.size();  
vector<bool> vis(V,0),pathVis(V,0),check(V,0);        
        vector<int> safe;
		for (int i = 0; i < V; i++) {
			if (!vis[i]) {
				dfs(i, graph, vis, pathVis,check);
			}
		}
		for(int i=0;i<V;i++){
		    if(check[i])safe.push_back(i);
		}
		return safe;    
        
        
    }
};