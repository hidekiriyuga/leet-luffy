class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size();
        if(n==1 || n==0)return 0;
        queue<pair<int,int>> q;
        set<pair<int,int>> vis;
        for(int i=0;i<n;i++){
            int msk=1<<i;
            q.push({i,msk});
            vis.insert({i,msk});
        }
         int finalst=(1<<n)-1;
        int path=0;
        while(!q.empty()){
            int s=q.size();
            path++;
            while(s--){
                pair<int,int> curr=q.front();
                q.pop();
                int currnode=curr.first;
                int currmsk=curr.second;
                for(int &adj:graph[currnode]){
                    int nmsk=currmsk|(1<<adj);
                    if(nmsk==finalst)return path;
                    if(vis.find({adj,nmsk})==vis.end()){
                        vis.insert({adj,nmsk});
                        q.push({adj,nmsk});
                        
                    }
                }
            }
        }
        return -1;
        
    }
};