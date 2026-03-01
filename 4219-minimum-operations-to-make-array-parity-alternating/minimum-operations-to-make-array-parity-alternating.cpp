class Solution {
public:
    vector<int> makeParityAlternating(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return {0, 0};
        long long cost0 = 0; 
        long long cost1 = 0; 
        for (int i = 0; i < n; i++) {
            if ((nums[i] & 1) != (i & 1))
                cost0++;
            if ((nums[i] & 1) != ((i + 1) & 1))
                cost1++;
        }
        long long minCost = min(cost0, cost1);
        long long bestRange = LLONG_MAX;
        for (int t = 0; t < 2; t++) {
            long long cost = (t == 0 ? cost0 : cost1);
            if (cost != minCost)
                continue;
            long long mx = LLONG_MIN;
            long long mn = LLONG_MAX;
            vector<int> changed;
            for (int i = 0; i < n; i++) {
                long long v = nums[i];

                int target;
                if (t == 0)
                    target = i & 1;
                else
                    target = (i + 1) & 1;

                if ((v & 1) == target) {
                    mx = max(v, mx);
                    mn = min(v, mn);

                } else {
                    changed.push_back(v);
                }
            }
            if (!changed.empty()) {
                int m = changed.size();
                if (m == 1) {
                    long long x = changed[0];
                    for (auto add : {-1, 1}) {
                        bestRange = min(bestRange,
                                        (max(mx, x + add) - min(mn, x + add)));
                    }

                } else {
                    sort(changed.begin(), changed.end());
                    long long x = changed[0];
                    long long y = changed[m - 1];

                    for (auto dx : {-1, 1}) {
                        for (auto dy : {-1, 1}) {
                            bestRange =
                                min(bestRange, max({mx, y + dy, x + dx}) -
                                                   min({mn, x + dx, y + dy}));
                        }
                    }
                }
            } else {
                bestRange = min(bestRange, mx - mn);
            }
        }
        return {(int)minCost, (int)bestRange};
    }
};