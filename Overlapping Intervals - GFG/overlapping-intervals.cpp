//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& inter) {
         // Code here
         //int a=inter[0][0],b=inter[0][1];
         vector<vector<int>> ans;
         sort(inter.begin(),inter.end());
         for(int i=0;i<inter.size();i++){
             if(ans.empty() || ans.back()[1]<inter[i][0]){
                 vector < int > v = {
        inter[i][0],
        inter[i][1]
      };
        ans.push_back(v);
             }
             else{
                 ans.back()[1]=max(ans.back()[1],inter[i][1]);
             }
         }
         return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends