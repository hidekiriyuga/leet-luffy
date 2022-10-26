class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1,mid;
        while(l<h){
            mid=(l+h)>>1;
            if(arr[mid]>arr[mid+1])h=mid;
            else l=mid+1;
        }
        return l;
    }
};