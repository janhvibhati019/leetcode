class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> A;
        for(int i=0;i<n;i++){
        A[nums[i]]++;
        if(A[nums[i]]>n/2){
            return nums[i];
        }
        }
        return -1;
    }
};