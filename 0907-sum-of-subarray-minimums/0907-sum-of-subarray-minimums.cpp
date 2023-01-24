class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size(),ans=0;
      //  cout<<n;
        int mod=1e9+7;
        stack<int> s1,s2;
        vector<int> ns(n),ps(n);//next smaller,previous smaller
        for(int i=0;i<n;i++){
            ns[i]=n-i-1;
            ps[i]=i;
        }
        for(int i=0;i<n;i++){
            while(!s1.empty() && arr[s1.top()]>arr[i]){
                ns[s1.top()]=i-s1.top()-1;
                s1.pop();
            }
            s1.push(i);
            
        }
    for(int i=n-1;i>=0;i--){
            while(!s2.empty() && arr[s2.top()]>=arr[i]){
                ps[s2.top()]=s2.top()-i-1;
                s2.pop();
            }
            s2.push(i);
            
        }
        for(int i=0;i<n;i++){
            long long prod=((ps[i]+1)*(ns[i]+1))%mod;
             prod=(prod*arr[i])%mod;
            ans=(ans+prod)%mod;
            //ans=ans%mod;
        }
        return ans;
        
    }
};