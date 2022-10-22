class Solution {
public:
    bool search(vector<int>& A, int Key) {
        int l=0,e=A.size()-1;
        int mid;
        while(l<e && A[l]==A[l+1])
        l++;
        while(e>l && A[e]==A[e-1])e--;
        while(l<=e){
             mid=(l+e)/2;
             if(A[mid]==Key)return true;
             if(A[l]<=A[mid]){
                 if(A[l]<=Key && Key<=A[mid])e=mid-1;
                 else l=mid+1;
             }
             else{
                 if(A[e]>=Key && Key>=A[mid])l=mid+1;
                 else e=mid-1;
             }
        }
        return false;
    }
};