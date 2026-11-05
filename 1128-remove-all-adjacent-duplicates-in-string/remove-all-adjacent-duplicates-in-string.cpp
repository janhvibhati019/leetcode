class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>a;
        string ans="";
        for(char c:s){
            if(!a.empty() && a.top()==c){
                a.pop();
            }
            else{
                a.push(c);
            }
        }
        while(!a.empty()){
            ans+=a.top();
            a.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};