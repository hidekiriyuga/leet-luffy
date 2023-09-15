class Solution {
public:
    int prims(vector<vector<pair<int,int>>> &adj,int n){
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,0});
        vector<bool> inMST(n, false);
        int sum=0;
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int wt     = p.first;
            int node   = p.second;
            
            if(inMST[node] == true)
                continue;
            
            inMST[node] = true;
            sum += wt;
            for(auto &tmp : adj[node]) {
                
                int neighbor      = tmp.first;
                int neighbor_wt   = tmp.second;
                
                if(inMST[neighbor] == false) {
                    pq.push({neighbor_wt, neighbor});
                }
 
            }
        }
        
        return sum;
        

    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                adj[i].push_back({j,d});
                adj[j].push_back({i,d});
                
            }
        }
        return prims(adj,n);
    }
};