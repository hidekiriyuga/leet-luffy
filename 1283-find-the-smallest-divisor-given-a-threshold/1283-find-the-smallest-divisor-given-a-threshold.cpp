class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1,end=1e6;
        while(start<end){
            int mid=(start+end)>>1;
            int sum=0;
            for(auto num:nums){
                sum+=num/mid;
                if(num%mid!=0)sum++;
               // cout<<sum<<"\n";
            }
            if(sum>threshold)start=mid+1;
            else end=mid;
        }
        return start;
    }
};
/*1 9 5
1 5 3
4 5 4
5 5

1 44 22
23 44 33
34 44 39
40 44 42
43 44 43
44 44 

*/