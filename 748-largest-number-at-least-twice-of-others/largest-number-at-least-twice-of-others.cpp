class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                index=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=index && maxi<2*nums[i]){
                return -1;
            }
        }
        return index;
    }
};