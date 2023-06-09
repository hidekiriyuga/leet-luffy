class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int l=0,r=n-1,mid;
        while(l<=r){
             mid=(l+r)/2;
            if(letters[mid]>target)r=mid-1;
            else l=mid+1;
        }
        return letters[l%n];
    }
};