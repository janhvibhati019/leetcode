class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> A;
        int i;
        for(i=0;i<s.length();i++){
            A[s[i]]++;
            
        }    

        for(int i = 0;i<s.length(); i++){
            if(A[s[i]] == 1) return i;
        }     

        return -1;
    }
};