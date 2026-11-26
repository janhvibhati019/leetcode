class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zero=0;
        int left=0;
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
                while(zero>k){
                if(nums[left]==0){
                    zero--;
                }
                left++;
              }  
              maxcount=max(maxcount,i-left+1);     
        }
        return maxcount;
    }
};