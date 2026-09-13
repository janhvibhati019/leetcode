class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector <char>a(26);
        a[0]='a';
        for(int i=0;i<26;i++){
            if(i!=0){
                a[i]=a[i-1]+1;
            }
            int count=0;
                for(int j=0;j<sentence.length();j++){
                     if(a[i]==sentence[j]){
                     count=1;
                     break;
                     }
                }
                if(count != 1)
                return false;
        }     
        return true;
        }
};