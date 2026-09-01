class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> a = heights;
        for(int i=0; i<heights.size();i++){
            for(int j=0; j<a.size()-i-1;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                }
            }
        }
        int count=0;
        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=a[i]){
                count++;
            }
        }
        return count;
    }
};