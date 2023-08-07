class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size()-1,m=matrix[0].size()-1;
        int l=0,r=n,lc=0,rc=m;
        while(l<=r){
            int mid=(l+r)/2;
            if(target<matrix[mid][0])r--;
            else if(target>matrix[mid][m])l++;
            else{
            lc=0;rc=m;
            while(lc<=rc){
                int mid2=(lc+rc)/2;
                if(target==matrix[mid][mid2])return 1;
                else if(target>matrix[mid][mid2])lc++;
                else rc--;
            }
                return 0;
            }
        }
        return 0;
    }
};