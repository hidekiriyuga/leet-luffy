//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int l=0,r=n-1,minval=INT_MAX,mid;
        while(l<=r){
            if(arr[l]<arr[r]){
                minval=min(minval,arr[l]);
                return minval;
            }
            mid=(l+r)/2;
            if(arr[l]<=arr[mid]){
                minval=min(minval,arr[l]);
                l=mid+1;
            }
            else{
                minval=min(minval,arr[mid]);
                r=mid-1;
            }
        }
        return minval;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends