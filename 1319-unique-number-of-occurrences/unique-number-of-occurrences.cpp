class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp1, mp2;
        for (int i = 0; i < arr.size(); i++) {
            mp1[arr[i]]++;
        }
        for (auto x : mp1) {
            if (mp2.find(x.second) != mp2.end()) {
                return false;
            }
            mp2[x.second] = 1;
        }
        return true;
    }
};