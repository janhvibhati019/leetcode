class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int total=0;
        vector<int>v;

        for(int i=0;i<n;i++){
            total+=nums[i];
        }

       for(int i=n-1;i>=0;i--){
        sum+=nums[i];
        total-=nums[i];
        v.push_back(nums[i]);
        if(sum>total)
        break;
       }
        return v;
    }
};