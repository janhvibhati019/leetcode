class Solution {
public:
    int distributeCandies(vector<int>& arr) {
        int count = 1;
        int n = arr.size();
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] != arr[i + 1])
                count++;
        }
        int mini = min(count, n / 2);

        return mini;
    }
};