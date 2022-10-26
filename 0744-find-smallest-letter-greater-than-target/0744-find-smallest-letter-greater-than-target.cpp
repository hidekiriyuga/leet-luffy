class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,r=letters.size()-1,mid;
                    if(target > letters[r])return letters[0];

        while(l<=r){
            mid=(l+r)>>1;
            if(letters[mid]>target)r=mid-1;
            else l=mid+1;
        }
        if(l>letters.size()-1)return letters[0];
        return letters[l];
    }
};