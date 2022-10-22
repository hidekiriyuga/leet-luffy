class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0,r=arr.size()-1,minval=INT_MAX,mid;
        while(l<=r){
            if(arr[l]<arr[r]){
                minval=min(minval,arr[l]);
                return minval;
            }
            mid=(l+r)/2;
            if(arr[l]<=arr[mid]){
                minval=min(minval,arr[l]);
                l=mid+1;
            }
            else{
                minval=min(minval,arr[mid]);
                r=mid-1;
            }
        }
        return minval;
    }
};