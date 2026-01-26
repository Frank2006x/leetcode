// Last updated: 1/26/2026, 8:36:22 AM
class Solution {
public:
    int smallestNumber(int n) {
        if (n <= 1)
            return 1;
        int res = ceil(log2(n+1));
        
        return pow(2, res) - 1;
    }

    
};