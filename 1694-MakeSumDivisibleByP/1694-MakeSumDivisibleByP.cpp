// Last updated: 1/26/2026, 8:38:32 AM
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (int i = 0; i < nums.size(); i++)
            total += nums[i];
        int need = total % p;
        if (need == 0)
            return 0;
        unordered_map<int, int> map;
        map[0] = -1;

        long long prefix = 0;
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            prefix = (prefix + nums[i]) % p;
            int target = (prefix - need + p) % p;
            if (map.count(target)) {
                int j = map[target];
                res = min(res, i - j);
            }
            map[prefix] = i;
        }
        return (res == nums.size()) ? -1 : res;
    }
};