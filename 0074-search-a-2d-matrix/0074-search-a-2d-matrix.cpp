class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int X) {
        int n=mat[0].size();    
        int row=0,col=n-1;
        while(col>=0 && row<mat.size()){
            if(X==mat[row][col])return true;
            else if(X>mat[row][col])row++;
            else col--;
        }
        return false;
    }
};