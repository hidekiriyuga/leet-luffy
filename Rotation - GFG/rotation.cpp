//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int l=0,r=n-1,minval=INT_MAX,mid,ans;
        while(l<=r){
            if(arr[l]<arr[r]){
                if(minval>=arr[l]){
                    minval=arr[l];
                    ans=l;
                }
                return ans;
            }
            mid=(l+r)/2;
            if(arr[l]<=arr[mid]){
                if(minval>=arr[l]){
                    minval=arr[l];
                    ans=l;
                }
                l=mid+1;
            }
            else{
                if(minval>=arr[mid]){
                    minval=arr[mid];
                    ans=mid;
                }
                r=mid-1;
            }
        }
        return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends