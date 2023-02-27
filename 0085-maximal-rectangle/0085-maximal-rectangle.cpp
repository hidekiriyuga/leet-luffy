class Solution {
public:
    int getMaxArea(vector<int> arr,int n)
    {
        // Your code here
        stack<long long> s;
        vector<int> rs(n);vector<int> ls(n);
        for(int i=0;i<n;i++){
            while(!s.empty()&& arr[s.top()]>=arr[i])s.pop();
            if(s.empty())ls[i]=0;
            else{
                ls[i]=s.top()+1;
                
            }
            s.push(i);
        }
        while(!s.empty())s.pop();
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&& arr[s.top()]>=arr[i])s.pop();
            if(s.empty())rs[i]=n-1;
            else{
                rs[i]=s.top()-1;
                
            }
            s.push(i);
        }
        int maxa=0;
        for(int i=0;i<n;i++){
            maxa= max(maxa,arr[i]*(rs[i]-ls[i]+1));
        }
        return maxa;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix[0].size();
        vector<int> heights(m,0);
        int res=-1;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]=='0'){
                    heights[j] = 0;
                } else {
                    heights[j] ++;
                }
            }
           res=max(res,getMaxArea(heights,m)); 
    }
        return res;
    }
};