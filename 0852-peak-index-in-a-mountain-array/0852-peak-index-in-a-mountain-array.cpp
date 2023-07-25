class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        while(l<r){
            int mid=(r+l)/2;
            if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1])return mid;
            if(arr[mid]<arr[mid-1])r=mid;
            else l=mid+1;
            
        }
        return 0;
    }
};