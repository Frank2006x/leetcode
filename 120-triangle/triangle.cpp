class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, 1e8));

        for (int i = 0; i < n; i++) {
            int m=triangle[i].size();
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {

                    dp[0][0] = triangle[0][0];
                    continue;
                }
                
                if (i > 0) {
                    dp[i][j] = dp[i - 1][j];
                }
                if (j > 0 && i > 0) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
                }
                if(i<n && j<m){
                dp[i][j]+=triangle[i][j];

                }
            }
        }
        int res=dp[n-1][0];
        for(int i=1;i<n;i++){
            res=min(res,dp[n-1][i]);
        }
        return res;
    }
};