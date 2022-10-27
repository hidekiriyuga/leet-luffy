//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int s=1;
        int e=INT_MIN;
        for(int i=0;i<N;i++){
            //s=min(s,piles[i]);
            e=max(e,piles[i]);
        }
        //cout<<s<<" "<<e; 
        while(s<e){
            int mid=s+(e-s)/2;
            int sum=0;
            for(auto num:piles){
                if(num<=mid)sum+=1;
                else
                { 
                if(num%mid==0)sum+=num/mid;
                else sum+=num/mid+1;
                
                /*sum+=ceil(float(num/mid))+1;
                    float x=float(num/mid);
                    cout<<e<<" "<<ceil(num/mid)<<"\n";*/
                }
            }
            
            //if(sum==H)return mid;
            if(sum<=H)e=mid;
            else s=mid+1;
        }
        return s;
    }
}; /*4 30 17
   18 30 24
   25 30 27
   28 30 29
   30 30 */
/*3 27 15
3 14 8
3 7 5
3 4 3

3 27 15
3 15 9
3 9 6
3 6 4

*/


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends