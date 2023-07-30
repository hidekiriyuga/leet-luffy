class Solution {
public:
    int strangePrinter(string s) {
        if(s.length()==0)return 0;
        int n=s.length();
        int state[n][n];
        for(int i=0;i<n;i++){
            state[i][i]=1;
        }
        for(int i=n-1;i>=0;i--){
            for(int c=1;c+i<n;c++){
                int j=c+i;
                if(c==1){
                    if(s[i]==s[j])state[i][j]=1;
                    else state[i][j]=2;
                    continue;
                }
                state[i][j]=INT_MAX;
                for(int k=i;k+1<=j;k++){
                    state[i][j]=min(state[i][j],state[i][k]+state[k+1][j]);
                }
                if(s[i]==s[j])state[i][j]--;
            }
        }
        return state[0][n-1];
    }
};