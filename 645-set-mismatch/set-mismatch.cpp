class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        int duplicate = 0, missing = 0;

        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for(int i = 1; i <= n; i++) {
            if(mp[i] == 2) {
                duplicate = i;
            }
            if(mp[i] == 0) {
                missing = i;
            }
        }
        return {duplicate, missing};
    }
};