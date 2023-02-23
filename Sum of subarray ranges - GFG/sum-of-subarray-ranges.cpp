//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long subarrayRanges(int N, vector<int> &nums) {
        // code here
        long result = 0;
        stack<int> inc;
        stack<int> dec;
        for(int i = 0 ; i <= nums.size() ; i ++){
            while(!inc.empty() && ( i == nums.size() || nums[inc.top()] < nums[i])){
                int currIndex = inc.top();inc.pop();
                int leftBound = inc.empty() ? -1 : inc.top(); 
                int rightBound = i;
                result += (currIndex - leftBound) * (rightBound - currIndex) * (long) nums[currIndex];                
            }
            while(!dec.empty() && (i == nums.size() || nums[dec.top()] > nums[i])){
                int currIndex =dec.top(); dec.pop();
                int leftBound = dec.empty()? -1 : dec.top(); 
                int rightBound = i;
                result -= (currIndex - leftBound) * (rightBound - currIndex) * (long) nums[currIndex];
            }
            inc.push(i);
            dec.push(i);
        }
        
        return result;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.subarrayRanges(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends