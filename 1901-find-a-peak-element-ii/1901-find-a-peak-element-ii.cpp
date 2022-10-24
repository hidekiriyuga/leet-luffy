class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int startcol=0,endcol=mat[0].size()-1;
        while(startcol<=endcol){
            
            int maxrow=0,midcol=(startcol+endcol)/2;
            for(int row=0;row<mat.size();row++){
                maxrow=mat[row][midcol]>=mat[maxrow][midcol]?row:maxrow;
            }
            bool l=midcol-1>=startcol && mat[maxrow][midcol-1]>mat[maxrow][midcol];
            bool r=midcol+1<=endcol && mat[maxrow][midcol+1]>mat[maxrow][midcol];
            if(!l && !r)return vector<int>{maxrow,midcol};
            else if(r)startcol=midcol+1;
            else endcol=midcol-1;
        }
        return vector<int>{-1,-1};
    }
};