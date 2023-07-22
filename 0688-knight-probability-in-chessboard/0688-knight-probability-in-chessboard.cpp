class Solution {
public:
    unordered_map<string,double> mp;
    int diff[8][8]={{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};
    double knightProbability(int n, int k, int row, int column) {
        return solve(n,k,row,column);
    }
    double solve(int n, int m, int r, int c){
        if(r<0 || r>=n ||c<0|| c>=n)return 0;
        if(m==0)return 1;
        double prob = 0;
        string k=to_string(r) + "-" + to_string(c) + "-" + to_string(m);
        if(mp.find(k) != mp.end())
        return mp[k];
        for(int i=0; i<8; i++)
        prob += solve(n,m-1, r+diff[i][0], c+diff[i][1])/8.0 ;
        mp[k]=prob;
        return prob;
    }
};