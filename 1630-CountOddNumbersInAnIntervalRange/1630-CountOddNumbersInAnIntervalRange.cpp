// Last updated: 1/26/2026, 8:38:41 AM
class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - (low / 2);
    }
};