class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto x:mp){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        int unique=v.size();
        for(int i=0;i<arr.size();i++){
            if(k>=v[i]){
                k-=v[i];
                unique--;
            }
            else{
                break;
            }
    }
    return unique;   
         }
};