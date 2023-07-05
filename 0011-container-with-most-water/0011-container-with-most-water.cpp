
class Solution {
public:
    int maxArea(vector<int>& h) {
        int left=0,right=h.size()-1,curr=0,maxi=0;
        while(left<right){
            curr=min(h[left],h[right])*(right-left);
            maxi=max(curr,maxi);
            if(h[left]<h[right])left++;
            else right--;
        }
        return maxi;
    }
};