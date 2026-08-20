class Solution {
public:
    bool isPalindrome(int n) {
        long long rev=0;
        int original=n;
        int digit;
        while(n>0){
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
        }
        if(original==rev){
            return true;
        }
        else{
            return false;
        }
    }
};