// Last updated: 1/26/2026, 8:36:08 AM
class Solution {
public:
    long long C2(long long n) {
        if (n < 2)
            return 0;
        return (n * (n - 1) / 2) % 1000000007;
    }

    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, int> map;
        set<int> set;
        for (auto i : points) {
            map[i[1]]++;
            set.insert(i[1]);
        }
        long long res = 0;
        long long prev = 0;
        for (auto i : set) {
            int c = map[i];
            long long h = C2(c);
            res = (res + (h * prev) % 1000000007) % 1000000007;
            prev = (prev + h) % 1000000007;
        }

        return res;
    }
};