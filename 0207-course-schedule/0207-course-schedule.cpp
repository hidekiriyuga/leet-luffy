class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<int> adj[V];
	    for(auto it:prerequisites){
	        adj[it[0]].push_back(it[1]);
	    }
	    vector<int> indeg(V,0);
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        for(auto it: adj[i])
	        indeg[it]++;
	    }
	    //queue<int> q;
	    for(int i=0;i<V;i++){
	        if(indeg[i]==0)q.push(i);
	    }
	    vector<int> topo;
	    while(!q.empty()){
	        int c=q.front();
	        q.pop();
	        topo.push_back(c);
	        for(auto it:adj[c]){
	            indeg[it]--;
	            if(indeg[it]==0)q.push(it);
	        }
	    }
	    if(topo.size()==V)return 1;
	    return 0;
    }
};