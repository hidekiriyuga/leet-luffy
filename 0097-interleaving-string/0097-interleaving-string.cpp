class Solution {
    unordered_map<string,bool> mem;
    bool check(string s1,string s2,string s3,int len1,int len2,int len3,int p1,int p2,int p3)
    {
        if(p3==len3)
            return (p1==len1 and p2==len2)?true:false;
        
        string key = to_string(p1)+"*"+to_string(p2)+"*"+to_string(p3);
        if(mem.find(key)!=mem.end())
            return mem[key];
        
        if(p1==len1)
            return mem[key] = s2[p2]==s3[p3]? check(s1,s2,s3,len1,len2,len3,p1,p2+1,p3+1):false;
        if(p2==len2)
            return mem[key] = s1[p1]==s3[p3]? check(s1,s2,s3,len1,len2,len3,p1+1,p2,p3+1):false;
        
        bool one = false,two = false;
        if(s1[p1]==s3[p3])
            one = check(s1,s2,s3,len1,len2,len3,p1+1,p2,p3+1);
        if(s2[p2]==s3[p3])
            two = check(s1,s2,s3,len1,len2,len3,p1,p2+1,p3+1);
        
        return mem[key] = one or two;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        int len1 = s1.length();
        int len2 = s2.length();
        int len3 = s3.length();
        if(len3 != len1+len2)
            return false;
        
        return check(s1,s2,s3,len1,len2,len3,0,0,0);
    }
};
/*class Solution {
public:
    unordered_map<string,bool> mp;
    bool solve(string s1, string s2, string s3,int l1,int l2,int l3,int p1,int p2,int p3){
        if(p3==l3){
            return (p1==l1 && p2==l2)?true:false;
        }
        string k=to_string(p1)+"*"+to_string(p2)+"*"+to_string(p3);
        
        if(mp.find(k)!=mp.end()){
            return mp[k];
        }
        if(p1==l1){
            return mp[k]=s2[p2]==s3[p3]?solve(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1):false;
        }
        if(p2==l2){
            return mp[k]=s1[p1]==s3[p3]?solve(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1):false;
        }
        bool o=false,t=false;
        if(s1[p1]==s3[p3]){
            o=solve(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1);
        }
        if(s2[p2]==s3[p3]){
            t=solve(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1);
        }
        return mp[k]=o or t;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int l1=s1.length();int l2=s2.length();int l3=s3.length();
        if((s1+s2)!=s3)return false;
        return solve(s1,s2,s3,l1,l2,l3,0,0,0); 
        
    }
};*/