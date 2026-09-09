class Solution {

    bool isPalindrome(string s){
        int n = s.size();

        int l = 0, r = n-1;


        while(l<=r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }

        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            string s = words[i];
            if( isPalindrome(s)){
                return s;
            }
        }
        return "";
    }
};