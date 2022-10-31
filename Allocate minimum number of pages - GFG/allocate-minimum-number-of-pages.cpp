//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool valid(int A[],int N,int mid,int M){
        int student=1,m=0;
        for(int i=0;i<N;i++){
                if(m+A[i]<=mid)m+=A[i];
                else{
                    student++;
                    if(student>M || A[i]>mid)return false;;
                    m=A[i];
                }
                
            }
            return true;
        
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        
        if(M>N)return -1;
        int start=INT_MAX,end=0;
        for(int i=0;i<N;i++){
            start=min(start,A[i]);
            end+=A[i];
        }
        //cout<<end;
        while(start<end){
            int mid=(start+end)/2;
            if(valid(A,N,mid,M)){
                end=mid;
            }
            else start=mid+1;
        }
        
        return end;
    }
};

/*12 247 129
12 129 70
71 129 100
101 129 115
101 115 108
109 115 112
113 115 114
113 114 113
113 113 

1 586 293
74 147 110
74 110 92
74 92 83
84*/


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends