class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        long r=n-index-1,l=index;
        long lo=1,hi=maxSum;
        long res=0;
        while(lo<=hi){
            long mid=(lo+hi)/2;
            long sum=mid;
            long rs=0,ls=0,m=mid-1;
            if(r<=m){
                rs=m*(m+1)/2-(m-r)*(m-r+1)/2;
                 
            }
            else {
                rs=m*(m+1)/2+1*(r-m);
            }
           if(l<=m){
                ls=m*(m+1)/2-(m-l)*(m-l+1)/2;
                 
            }
            else {
                ls=m*(m+1)/2+1*(l-m);
            }
            sum+=ls+rs;
            if(sum<=maxSum){
                res=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return res;
    }
};