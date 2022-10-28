class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
      // int N=piles.size();
        int s=1;
        int e=INT_MIN;
        for(int i=0;i<piles.size();i++){
            //s=min(s,piles[i]);
            e=max(e,piles[i]);
        }
        //cout<<s<<" "<<e; 
        while(s<e){
            int mid=s+(e-s)/2;
            int sum=0;
            for(auto num:piles){
                if(num<=mid)sum+=1;
                else
                { 
                if(num%mid==0)sum+=num/mid;
                else sum+=num/mid+1;
                
                /*sum+=ceil(float(num/mid))+1;
                    float x=float(num/mid);
                    cout<<e<<" "<<ceil(num/mid)<<"\n";*/
                }
            }
            
            //if(sum==H)return mid;
            if(sum<=H)e=mid;
            else s=mid+1;
        }
        return s;
    }
};