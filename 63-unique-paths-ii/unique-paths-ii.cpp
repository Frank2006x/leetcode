class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1) return 0;
        if(obstacleGrid[0][0]==1) return 0;
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    dp[i][j] = 1;
                    continue;
                }
                if (obstacleGrid[i][j] == 1)
                    continue;
                int up = 0;
                int right = 0;
                if (i > 0) {
                    up += dp[i - 1][j];
                }
                if (j > 0) {
                    right += dp[i][j - 1];
                }
                dp[i][j] = up + right;
            }
        }

        
        return dp[m - 1][n - 1];
    }
};