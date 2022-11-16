class Solution {
public:
   static bool comparator(pair<char,int> a,pair<char,int> b){
    if(a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;    
    

}
    string frequencySort(string s) {
        vector<pair<char,int>> v(80,{0,0});
    for(int i=0;i<s.length();i++){
        v[s[i]-'0'].first=s[i];
        v[s[i]-'0'].second++;
    }
    sort(v.begin(),v.end(),comparator);
        string ans="";
    for(auto i:v)
    {
        int c=i.second;
        while(c--)
        ans+=i.first;
    }
        return ans;
        
    }
};