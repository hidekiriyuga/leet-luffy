//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int V, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int> adj[V];
	    for(auto it:prerequisites){
	        adj[it.first].push_back(it.second);
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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends