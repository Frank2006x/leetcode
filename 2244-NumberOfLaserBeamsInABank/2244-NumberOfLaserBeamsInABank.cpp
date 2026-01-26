// Last updated: 1/26/2026, 8:37:43 AM
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> row;
        for (int i = 0; i < bank.size(); i++) {
            int num = 0;
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1') {
                    num++;
                }
            }
            if (num != 0) {
                row.push_back(num);
            }
        }
        int res = 0;
       if (row.size() < 2) return 0; 
        for (int i = 0; i < row.size() - 1; i++) {
            res += (row[i] * row[i + 1]);
        }
        return res;
    }
};