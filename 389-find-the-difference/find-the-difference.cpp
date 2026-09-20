class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            mp2[t[j]]++;
        }
        for(auto x:mp2){
            if(x.second>mp1[x.first]){
                return x.first;
            }
        }
        return 0;
    }
};