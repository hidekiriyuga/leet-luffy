//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int x)
	{
	    // Code here.
	    int l=0,e=x,mid,ans=-1;
        while(l<=e){
            mid=(l+e)/2;
            if(pow(mid,n) == x)return mid;
            else if(pow(mid,n)<x){l=mid+1;}
            else e=mid-1;
        }
        return -1; 
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends