class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start=INT_MAX,end=INT_MIN,mid;
        //int n=(m/1000000)*k;
       // cout<<bloomDay.size();
        long long n=long (m)*long(k);
        if(n> bloomDay.size())return -1;
        for(int i=0;i<bloomDay.size();i++){
            start=min(start,bloomDay[i]);
            end=max(end,bloomDay[i]);
        }
        //cout<<start<<" "<<end;
        while(start<end){
            int sum=0,ans=0;
            mid=(start+end)>>1;
            for(auto num:bloomDay){
                if(num<=mid)sum++;
                else{
                    ans+=sum/k;
                    sum=0;
                }
            }
            ans+=sum/k;
            //cout<<ans;
            if(ans>=m)end=mid;
            else start=mid+1;
        }
        return start;
        
    }
};
/*7 12 9
10 12 11
12 12



1 10 5
1 5 3
1 3 2
3 3 */
