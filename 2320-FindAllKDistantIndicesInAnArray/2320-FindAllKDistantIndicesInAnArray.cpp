// Last updated: 1/26/2026, 8:37:33 AM
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                int start = max(0, i - k);
                int end = min((int)nums.size() - 1, i + k);
                for (int j = start; j <= end; j++) {
                    res.insert(j);
                }
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};
