//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int l=0,h=n-1;
    int mid;
    int a=-1,b=-1;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==x){
            a=mid,b=mid;
            break;
        }
        else if(arr[mid]>x){
            h=mid-1;
        }
        else l=mid+1;
    }
    if(a==-1)return {-1,-1};
    while(arr[a]==arr[a-1])a--;
    while(arr[b]==arr[b+1])b++;
    return {a,b};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends