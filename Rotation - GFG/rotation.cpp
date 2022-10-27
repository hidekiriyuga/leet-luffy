//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    /*int l=0,r=n-1,minval=INT_MAX,mid,ans;
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
	}*/
	int l=0,h=n-1,mid,ans=-1;
	while(l<=h){
	    mid=(l+h)/2;
	    if(mid<h && arr[mid]>arr[mid+1]){ans= mid;break;}
	    else if(mid>l && arr[mid-1]>arr[mid]){ans= mid-1;break;}
	    else if(arr[mid]<=arr[l])h=mid-1;
	    else l=mid+1;
	}
return ans+1;
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