//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string S, int K) {
        // code here
        int l=0,r=0,ans=0,count=0;
        vector<int> v(26,0);
        while(r<S.length()){
            v[S[r]-'A']++;
            if(count<v[S[r]-'A'])count=v[S[r]-'A'];
            while(r-l+1-count>K){
                v[S[l]-'A']--;
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
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends