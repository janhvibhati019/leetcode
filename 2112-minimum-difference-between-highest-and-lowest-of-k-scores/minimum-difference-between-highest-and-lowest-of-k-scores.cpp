class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(k==1){
        return 0;
        }
        int diff=INT_MAX;
        for(int i=0;i<=n-k;i++){
        diff=min(diff,nums[i+k-1]-nums[i]);    
        }
        return diff;
    }
};