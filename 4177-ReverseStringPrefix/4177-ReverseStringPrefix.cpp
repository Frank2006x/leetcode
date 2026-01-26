// Last updated: 1/26/2026, 8:35:28 AM
class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};