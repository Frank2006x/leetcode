// Last updated: 1/26/2026, 8:38:24 AM
class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        unordered_map<int, pair<int, int>> map;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < nums.size(); i++) {
            map[i] = {even, odd};
            if (i % 2 == 0) {
                even += nums[i];
            } else {
                odd += nums[i];
            }
        }

        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                if ((even - nums[0]) == odd)
                    res++;
            } else if (i == nums.size() - 1) {
                if (i % 2 == 1) {
                    if (odd - nums[i] == even) {
                        res++;
                    }
                } else {
                    if (even - nums[i] == odd) {
                        res++;
                    }
                }
            } else {
                int e = map[i].first;
                int o = map[i].second;
                e += odd - map[i].second;
                o += even - map[i].first;
                if (i % 2 == 0) {
                    o -= nums[i];
                } else {
                    e -= nums[i];
                }

                if (e == o) {
                    res++;
                }
            }
        }
        return res;
    }
};