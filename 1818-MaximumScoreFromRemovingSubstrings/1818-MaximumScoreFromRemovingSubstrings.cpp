// Last updated: 1/26/2026, 8:38:17 AM
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int total = 0;
        if (y > x) {
            total += removeSub(s, "ba", y);
            total += removeSub(s, "ab", x);
        } else {
            total += removeSub(s, "ab", x);
            total += removeSub(s, "ba", y);
        }
        return total;
    }
    int removeSub(string& s, string sub, int n) {
        int gain = 0;
        string temp;
        for (char ch : s) {
            temp += ch;
            if (temp.size() >= 2 && (temp.substr(temp.size() - 2) == sub)) {
                gain += n;
                temp.pop_back();
                temp.pop_back();
            }
        }
        s = temp;
        return gain;
    }
};
