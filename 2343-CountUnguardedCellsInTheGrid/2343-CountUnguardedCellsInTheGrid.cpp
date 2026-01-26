// Last updated: 1/26/2026, 8:37:28 AM
class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards,
                       vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        for (auto i : walls) {
            grid[i[0]][i[1]] = 2;
        }
        for (auto g : guards) grid[g[0]][g[1]] = 1;
        for (int i = 0; i < m; ++i) {
            bool seen = false;
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2)
                    seen = false;
                else if (grid[i][j] == 1)
                    seen = true;
                else if (seen)
                    grid[i][j] = 3;
            }
            seen = false;
            for (int j = n - 1; j >= 0; --j) {
                if (grid[i][j] == 2)
                    seen = false;
                else if (grid[i][j] == 1)
                    seen = true;
                else if (seen)
                    grid[i][j] = 3;
            }
        }

        for (int j = 0; j < n; ++j) {
            bool seen = false;
            for (int i = 0; i < m; ++i) {
                if (grid[i][j] == 2)
                    seen = false;
                else if (grid[i][j] == 1)
                    seen = true;
                else if (seen)
                    grid[i][j] = 3;
            }
            seen = false;
            for (int i = m - 1; i >= 0; --i) {
                if (grid[i][j] == 2)
                    seen = false;
                else if (grid[i][j] == 1)
                    seen = true;
                else if (seen)
                    grid[i][j] = 3;
            }
        }

        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 0) {
                    res++;
                }
            }
        }

        return res;
    }
};