// Last updated: 1/26/2026, 8:36:41 AM
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> dp = energy;
        for (int i = n - k - 1; i >= 0; --i) {
            dp[i] += dp[i + k];
        }
        return *max_element(dp.begin(), dp.end());
    }
};