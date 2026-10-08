class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int a=0;
        for(char c:s){
            if(c=='('){
            if(a>0){
                ans+=c;
            }
            a++;
            }
            else{
                a--;
                if(a>0){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};