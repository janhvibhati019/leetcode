class Solution {
public:
    int subtractProductAndSum(int n) { 
        int sum=0;
        int result;
        int digit=0;
        int product=1;
        while(n>0){
            digit=n%10;
            sum+=digit;
            product*=digit;
            n/=10;
        }
        result=product-sum;
        return result;
    }
};