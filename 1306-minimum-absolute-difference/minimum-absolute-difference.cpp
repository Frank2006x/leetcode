class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
        int mdiff=INT_MAX;
        for(int i=1;i<arr.size();i++){
            mdiff=min(mdiff,abs(arr[i]-arr[i-1]));
        }   
        for(int i=1;i<arr.size();i++){
            if(mdiff==abs(arr[i]-arr[i-1])){
                res.push_back({arr[i-1],arr[i]});
            }
        }   
        return res;

    }
};