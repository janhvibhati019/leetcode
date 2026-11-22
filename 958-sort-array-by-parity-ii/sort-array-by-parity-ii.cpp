class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even,odd;
       for(int x:nums){
        if(x%2==0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
       }
       int e=0, o=0;
       for(int i=0;i<nums.size();i++){
        if(i%2==0){
            nums[i]=even[e++];
        }
        else{
            nums[i]=odd[o++];
        }
       }
       return nums;
    }
};