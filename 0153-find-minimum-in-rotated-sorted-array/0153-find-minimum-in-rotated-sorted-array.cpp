class Solution {
public:
    int findMin(vector<int>& arr) {
        /*int l=0,r=arr.size()-1,minval=INT_MAX,mid;
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
        return minval;*/
        int n=arr.size();
        int l=0,h=n-1,mid,ans=-1;
	while(l<=h){
	    mid=(l+h)/2;
	    if(mid<h && arr[mid]>arr[mid+1]){ans= mid;break;}
	    else if(mid>l && arr[mid-1]>arr[mid]){ans= mid-1;break;}
	    else if(arr[mid]<=arr[l])h=mid-1;
	    else l=mid+1;
	}
return arr[(ans+1)%n];
    }
};