class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxcount=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            count++;
            if(maxcount<count){
                maxcount=count;
            }
        }
        //cout<<count<<" "<<maxcount<<endl;
        return maxcount;
    }
};