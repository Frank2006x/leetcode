// Last updated: 1/26/2026, 8:35:25 AM
class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center,
                          int radius) {
        vector<int> res = {-1, -1};
        int q = INT_MIN;
        for (auto i : towers) {
            int d = abs(i[0] - center[0]) + abs(i[1] - center[1]);
            if (d <= radius) {
                if (i[2] == q) {
                    if (i[0] < res[0]) {
                        res[0] = i[0];
                        res[1] = i[1];
                    }else if(i[0]==res[0] && i[1]<res[1]){
                        res[0] = i[0];
                        res[1] = i[1];
                    }
                    
                }
                if (i[2] > q) {
                    q = i[2];
                    res[0] = i[0];
                    res[1] = i[1];
                }
            }
        }
        return res;
    }
};