// Last updated: 1/26/2026, 8:35:36 AM
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(nums[i]) != map.end()) {
                map[nums[i]].push_back(i);
            } else {
                map[nums[i]] = {i};
            }
        }

        int res = INT_MAX;
        for (auto i : map) {
            if (i.second.size() >= 3) {

                for (int j = 0; j < i.second.size() - 2; j++) {
                    int dis = abs(i.second[j] - i.second[j + 1]) +
                              abs(i.second[j + 1] - i.second[j + 2]) +
                              abs(i.second[j] - i.second[j + 2]);
                    res = min(res, dis);
                }
            }
        }
        return res == INT_MAX ? -1 : res;
    }
};