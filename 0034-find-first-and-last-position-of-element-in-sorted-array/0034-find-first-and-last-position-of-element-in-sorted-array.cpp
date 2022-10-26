class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int s,e;
        s=search(arr,x,true);
        e=search(arr,x,false);
        return {s,e};
    }
    
    int search(vector<int> arr,int x,bool strind){
        //int n=arr.size();
        int l=0,h=arr.size()-1;
    int mid;
    int a=-1;
    while(l<=h){
        mid=(l+h)>>1;
        if(arr[mid]==x){
            a=mid;
            if(strind)h=mid-1;
            else l=mid+1;
        }
        else if(arr[mid]>x){
            h=mid-1;
        }
        else l=mid+1;
    }
    return a;
    }
};