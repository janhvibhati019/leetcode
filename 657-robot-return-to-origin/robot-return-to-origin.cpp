class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int>mp;
        for(int i=0;i<moves.length();i++){
            mp[moves[i]]++;
        }
            if(mp['R']==mp['L'] && mp['U']==mp['D']){
                return true;
            }
        return false;
    }
};