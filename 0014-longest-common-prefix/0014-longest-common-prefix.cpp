#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        sort(arr.begin(),arr.end());
        int N=arr.size();
        string ans="";
        if(arr[0][0]!=arr[N-1][0])return "";
        for(int i=0;i<arr[0].size();i++){
            if(arr[N-1][i]!=arr[0][i])break;
            else ans+=arr[0][i];
        }
        return ans;
    }
};