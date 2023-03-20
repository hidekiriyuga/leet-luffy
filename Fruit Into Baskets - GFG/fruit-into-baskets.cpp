//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &f) {
        int l=0,r=0,ans=0;
        unordered_map<int,int> mp;
        while(r<N){
          mp[f[r]]++;
          if(mp.size()>2){
              if(mp[f[l]]==1)mp.erase(f[l]);
              else 
              mp[f[l]]--;
          
          l++;
          }
          ans=max(ans,r-l+1);
          r++;
          
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends