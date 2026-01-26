// Last updated: 1/26/2026, 8:37:54 AM
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[k - 1] - nums[0];
        for(int i = 0; i + k <= n; i ++){
            ans = min(ans, nums[i + k - 1] - nums[i]);
        }
        return ans;
    }
};