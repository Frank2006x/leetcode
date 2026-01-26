// Last updated: 1/26/2026, 8:37:42 AM
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        string p = "";
        for (int i = 0; i < s.size(); i++) {
            if (i % k == 0 && i != 0) {
                res.push_back(p);
                p = "";
            }
            p += s[i];
        }
        if (!p.empty()) {
            while (p.size() < k) {
                p += fill;
            }
        }
        res.push_back(p);
        return res;
    }
};