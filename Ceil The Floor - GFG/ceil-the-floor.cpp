//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int l=0,h=n-1;
    int mid;
    pair<int,int> a;
    a.first=-1;a.second=-1;
    sort(arr,arr+n);
    while(l<=h){
        mid=(l+h)/2;
        if(x>=arr[mid]){
            if(arr[mid]==x){
                a.first=arr[mid];
            a.second=arr[mid];
            return a;}
            a.first=arr[mid];
            if(mid+1<n)
            a.second=arr[mid+1];
            else a.second=-1;
            l=mid+1;
        }
        else{
            a.second=arr[mid];
            h=mid-1;
        }
    }
    return a;
}