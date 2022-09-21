class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int X) {
            int M=mat[0].size();
            int N=mat.size();
        for(int j=0;j<N;j++){
	    if(X>=mat[j][0] && X<= mat[j][M-1])
	    {
	        for(int i=0;i<M;i++)
	        {
	            if(X==mat[j][i])
	            return true;
	            
	        }
	           
	            return false;
	    }
	    }
	    //return 0;
        return false;
    }
};