class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n=arr.size();
        int l=0,h=n-1;
    int mid;
    int a=-1;
    int b=-1;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==x){
            a=mid;
            b=mid;
            break;
        }
        else if(arr[mid]>x){
            h=mid-1;
        }
        else l=mid+1;
    }
    if(a==-1)return {-1,-1};
   while(a>0){
       if(arr[a]==arr[a-1])a--;
       else break;
   }
    while(b<(n-1)){
        if(arr[b]==arr[b+1])b++;
        else break;
    }
   // while(arr[b]==arr[b+1])b++;
    return {a,b};
    }
};