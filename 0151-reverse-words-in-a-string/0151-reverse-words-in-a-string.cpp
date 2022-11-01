class Solution {
public:
    string reverseWords(string S) {
        string ans="";
        vector<string> v;
        for(int i=0;i<S.length();i++){
            if(S[i]!=' ')ans+=S[i];
            else{
                if(ans!="")
                v.push_back(ans);
                ans="";
            }
        }
        if(S[S.length()-1]!=' ')
        v.push_back(ans);
         ans="";
        //cout<<v.size();
       for(int i=v.size()-1;i>0;i--){
          // cout<<v[i];
           ans+=v[i];
           ans+=" ";
            
        }
        ans+=v[0];
        return ans;
    }
};