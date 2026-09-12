class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum1+=nums[i];
            while(nums[i]>0){
                sum2+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
        }
        return abs(sum1-sum2);
    }
};