class Solution {
public:
    unordered_map<string,bool> m;
    bool solve(string s1,string s2){
        if(s1.size()==1)return s1==s2;
        int n=s1.size();
        string key=s1+s2;
        if(m.find(key)!=m.end()){
            return m[key];
        }
        vector<int> f1(26),f2(26);
        for(int i=0;i<n;i++){
            f1[s1[i]-'a']++;
            f2[s2[i]-'a']++;
        }
        if(f1!=f2)return m[key]=false;
        for(int i=1;i<n;i++){
            if(solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i),s2.substr(i))
              ||
              (solve(s1.substr(0,i),s2.substr(n-i)) && solve(s1.substr(i),s2.substr(0,n-i))))
                return m[key]=true;
        }
        return m[key]=false;
            
    }
    bool isScramble(string s1, string s2) {
      return solve(s1,s2);  
    }
};