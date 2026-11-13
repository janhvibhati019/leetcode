class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows == 1 || numRows >= n)
            return s;
        int cycle = 2 * numRows - 2;
        int cols = (n / cycle + 1) * (numRows - 1);
        vector<vector<char>> mat(numRows, vector<char>(cols, ' '));
        int row = 0, col = 0;
        int idx = 0;
        while(idx < n) {
            for(int i = 0; i < numRows && idx < n; i++) {
                mat[row][col] = s[idx];
                idx++;
                row++;
            }

            row -= 2;
            col++;
            for(int i = 0; i < numRows - 2 && idx < n; i++) {
                mat[row][col] = s[idx];
                idx++;
                row--;
                col++;
            }

        }

        string ans = "";

        for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < cols; j++) {

                if(mat[i][j] != ' ') {
                    ans += mat[i][j];
                }

            }
        }

        return ans;
    }
};