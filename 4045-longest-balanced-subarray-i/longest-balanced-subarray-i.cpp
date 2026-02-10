class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int e = 0;
            int o = 0;
            unordered_map<int, int> map;
            for (int j = i; j < nums.size(); j++) {
                if (map.find(nums[j]) == map.end()) {
                    if (nums[j] % 2 == 0) {
                        e++;
                    } else{
                        o++;
                    }
                }
                map[nums[j]]++;
                if (e == o)
                    res = max(res, j - i + 1);
            }
        }
        return res;
    }
};