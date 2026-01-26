// Last updated: 1/26/2026, 8:36:21 AM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> prefix;

        int sum = 0;
        for (int i : nums) {
            sum += i;
            prefix.push_back(sum);
        }
        int res = 0;
        for (int i = 0; i < prefix.size() - 1; i++) {

            if (((sum - nums[i]) - nums[i]) % 2 == 0) {
                res++;
            }
        }
        return res;
    }
};