class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool>a(n+1,false);
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(a[i-j*j]==false){
                    a[i]=true;
                    break;
                }
            }
        }
        return a[n];
    }
};