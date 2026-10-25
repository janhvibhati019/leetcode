class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<ransomNote.length();i++){
            mp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++){
            mp2[magazine[i]]++;
        }
        for(auto x:mp1){
            if(x.second>mp2[x.first]){
                return false;
            }
        }
        return true;
    }
};