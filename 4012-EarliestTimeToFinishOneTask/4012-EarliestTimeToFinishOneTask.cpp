// Last updated: 1/26/2026, 8:35:44 AM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int res=INT_MAX;
        for(auto i:tasks){
            res=min(res,i[0]+i[1]);
        }
        return res;
    }
};