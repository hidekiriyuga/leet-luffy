//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        /*int l=0;
        
        vector<int> ans;
        for(int j=0;j<=n-k;j++){
            int maxi=arr[j];
            for(int i=j;i<=j+k-1;i++){
                 maxi=max(maxi,arr[i]);
            }
            ans.push_back(maxi);
            //maxi=0;
            
        }
        return ans;*/
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(!dq.empty()&& dq.front()==i-k)dq.pop_front();
            while(!dq.empty()&& arr[dq.back()]<arr[i])dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends