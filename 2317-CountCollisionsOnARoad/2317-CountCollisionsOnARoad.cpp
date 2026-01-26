// Last updated: 1/26/2026, 8:37:34 AM
class Solution {
public:
    int countCollisions(string s) {
        int left = 0;
        while (left < s.size() && s[left] == 'L')
            left++;

        int right = s.size() - 1;
        while (right >= 0 && s[right] == 'R')
            right--;
        int collisions = 0;
        for (int i = left; i <= right; i++) {
            if (s[i] != 'S')
                collisions++;
        }
        return collisions;
    }
};