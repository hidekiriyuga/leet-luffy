//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lessorequalmid(vector<int> row,int mid){
        int l=0,h=row.size()-1;
        while(l<=h){
            int md=(l+h)>>1;
            if(row[md]<=mid)l=md+1;
            else h=md-1;
            
        }
        return l;
    }
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here  
        int l=0,h=1e9;
        while(l<=h){
            int mid=(l+h)>>1;
            int cnt=0;
            for(int i=0;i<R;i++){
                cnt+=lessorequalmid(matrix[i],mid);
            }
            if(cnt<=(R*C)/2)l=mid+1;
            else h=mid-1;
        }
        return l;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends