class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int x=num;
        while (x> 0) {

            int val = x % 10;
            if (num % val == 0) {
                   count++;
            }
            x/=10;
            
        }
        return count;
    }
};