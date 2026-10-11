class Solution {
public:
    bool isPerfectSquare(int num) {
        bool found=false;
        for(long long i=1;i<=num/2;i++){
            if(i*i==num){
            found=true;
            break;
            }
        }
        if(num==1 || num==0){
            return true;
        }
        if(!found){
        return false;
        }
        else
        return true;
    }
};