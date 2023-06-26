class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> start,end;
        int i=0,j=costs.size()-1,count=0;
        long long res=0;
        while(count<k){
            while(start.size()<candidates and i<=j) start.push(costs[i++]);
            while(end.size()<candidates and j>=i) end.push(costs[j--]);

            int a=start.size()>0 ? start.top() : INT_MAX;
            int b=end.size()>0 ? end.top() : INT_MAX;
            if(a<=b){
                res+=a;
                start.pop();
            } else {
                res+=b;
                end.pop();
            }
            count++;
        }
        return res;
    }
};