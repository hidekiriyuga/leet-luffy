class Solution {
public:
    bool isHappy(int n) {
        int fast=n,slow=n;
        do{
           slow=findsqure(slow);
           fast=findsqure(findsqure(fast)); 
        }while(fast!=slow);
        if(slow==1)return true;
        return false;
    }
    int findsqure(int num){
        int ans=0;
        while(num>0)
        {
            int rem=num%10;
            ans+=rem*rem;
            num=num/10;
            
        }
        return ans;
    }
};