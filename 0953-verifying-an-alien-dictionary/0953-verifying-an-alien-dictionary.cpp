#include<bits/stdc++.h>
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mp;
        for(int i=0;i<order.length();i++){
            mp[order[i]]=i+1;
        }
        
        
        for(int i=0;i<words.size()-1;i++){
            string curr=words[i];
            string next=words[i+1];
            int n=min(size(curr),size(next));
            if(n!=curr.length()&& next==curr.substr(0,n))
                return 0;
            for(int i=0;i<n;i++){
                if(mp[curr[i]]>mp[next[i]])return 0;
                if(mp[curr[i]]<mp[next[i]])break;
                
            }
            
    }
        return 1;
    }
};