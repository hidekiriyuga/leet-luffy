class Solution {
public:
    vector<int> countBits(int n) {
       /* vector<int> ans;
         for(int i = 0; i<=n; i++)
        {
             int sum = 0;
            int num = i;
            while(num != 0)
            {
                sum += num%2;
                num = num/2;
            }
            ans.push_back(sum);
        }
        return ans;*/
        vector<int> t(n+1);
        
        t[0] = 0;
        
        
        
        for(int i = 1; i<=n; ++i)
            t[i] = t[i/2] + i%2;
        
        return t;
    }
};