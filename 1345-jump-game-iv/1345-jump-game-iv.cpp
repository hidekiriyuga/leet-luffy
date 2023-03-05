class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return 0;
        unordered_map<int,vector<int>> indices;
        for(int i=0;i<n;i++){
            indices[arr[i]].push_back(i);
        }
        queue<int> q;
        vector<bool> visited(n);
        q.push(0);//first index
        visited[0]=true;
        int step=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int curr=q.front();
                q.pop();
                if(curr==n-1)return step;
                vector<int>& jumpnext=indices[arr[curr]];
                jumpnext.push_back(curr-1);
                jumpnext.push_back(curr+1);
                for(int nextind:jumpnext){
                    if(nextind>=0&& nextind<n&&!visited[nextind]){
                        q.push(nextind);
                        visited[nextind]=true;
                    }
                }
                jumpnext.clear();
            }
            step++;
        }
        return -1;
    }
};