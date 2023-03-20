class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        if(flowerbed.size()==1&& flowerbed[0]==0 && n<=1)return  true;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0) {
               int next = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1]; 
               int prev = (i == 0) ? 0 : flowerbed[i - 1];
               if(next == 0 && prev == 0) {
                   flowerbed[i] = 1;
                   c++;
               }
            }

        }
        //cout<<c;
        if(c>=n)return true;
        return false;
    }
};