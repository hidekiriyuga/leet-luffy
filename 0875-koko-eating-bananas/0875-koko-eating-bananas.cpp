class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=INT_MIN,mid;
        for(auto i:piles){
            e=max(e,i);
        }
        while(s<e){
            int sum=0;
          mid=s+(e-s)/2;
            for(int i:piles){
                
                sum+=i/mid;
                if(i%mid!=0)sum++;
            }
            if(sum<=h)e=mid;
            else s=mid+1;
        }
        return s;
        
    }
};