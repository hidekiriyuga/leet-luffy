class Solution {
public:
    int shipWithinDays(vector<int>& arr, int D) {
        int start=INT_MIN,end=0,N=arr.size();
        for(int i=0;i<N;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
            
        }
        //cout<<end;
        while(start<end){
            int mid=(start+end)>>1;
            int total_weight=0,days=0;
            for(int i=0; i<N; i++){
            total_weight += arr[i];
            
            if(total_weight > mid){
                total_weight = arr[i];
                days++;
            } 
            
            if(i == N-1 && total_weight <= mid)
                days++;
        }
            if(days>D)start=mid+1;
            else end=mid;
        }
        return start;
    }
};