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