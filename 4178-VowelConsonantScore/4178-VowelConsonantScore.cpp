// Last updated: 1/26/2026, 8:35:27 AM
class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;
        for (char i : s) {
            if (i >= 'a' && i <= 'z') {

                if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
                    v++;
                } else {
                    c++;
                }
            }
        }

        if (c > 0) {
            return v / c;
        }
        return 0;
    }
};