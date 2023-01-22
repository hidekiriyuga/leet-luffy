class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int prefix[n],suffix[n];
        int gain=0;
        prefix[0]=height[0];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }
        suffix[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            gain+=min(prefix[i],suffix[i])-height[i];
        }
        return gain;
            
        
    }
};