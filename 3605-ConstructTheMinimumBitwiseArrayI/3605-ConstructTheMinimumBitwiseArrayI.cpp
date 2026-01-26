// Last updated: 1/26/2026, 8:36:28 AM
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> res;
        for (auto& n : nums) {
            if (n & 1) {
                auto z = ((n + 1) & ~n) >> 1;
                res.push_back(n & ~z);
            } else
                res.push_back(-1);
        }
        return res;
    }
};