class Solution {
public:
    int helper(string s,int l,int h)
{
 while(l>=0 && h<s.size() && s[l]==s[h])
 {
     l--;
     h++;
 }
 return h-l-1;
    }
    string longestPalindrome(string S) {
        int l=0,h=0;
for(int i=0;i<S.size();i++)
{
   int length1 = helper(S,i,i);
   int length2 = helper(S,i,i+1);
   int length = max(length1,length2);
   if(h-l<length-1)
   {
       l = i -(length-1)/2;
       h = i + length/2;
   }
}
return S.substr(l,h-l+1);
    }
};