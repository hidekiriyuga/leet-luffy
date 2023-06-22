//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int indeg[V] = {0};
		queue<int> q;
		vector<int>ans;
		for(int i=0;i<V;i++){
		    for(auto it:adj[i]){
		        indeg[it]++;
		    }
		}
		for(int i=0;i<V;i++){
		    if(indeg[i]==0)q.push(i);
		}
		while(!q.empty()){
		    int n=q.front();
		    q.pop();
		    ans.push_back(n);
		    for(auto it:adj[n]){
		        indeg[it]--;
		        if(indeg[it]==0)q.push(it);
		    }
		    
		    
		}
		if(ans.size()==V)return 0;
		return 1;
    }
    /*
     DFS
    bool dfs(int node,vector<int> adj[],int vis[],int pathVis[]){
        vis[node]=1;
        pathVis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,adj,vis,pathVis))return true;
            }
            else if(pathVis[it])return true;
        }
        pathVis[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V] = {0};
		int pathVis[V] = {0};

		for (int i = 0; i < V; i++) {
			if (!vis[i]) {
				if (dfs(i, adj, vis, pathVis) == true) return true;
			}
		}
		return false;
    }*/
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends