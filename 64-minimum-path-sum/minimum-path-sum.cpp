class Solution {
public:
    int solve(int x,int y,vector<vector<int>>& grid,vector<vector<int>>& dp,int m,int n){
        if(x<0 || x>=m || y<0 || y>=n){
            return 1e9;
        }
        if(x==0 && y==0) return grid[0][0];
        if(dp[x][y]!=-1) return dp[x][y];
        int up=solve(x-1,y,grid,dp,m,n);
        int left=solve(x,y-1,grid,dp,m,n);

        return dp[x][y]=min(up,left)+grid[x][y];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(m==1 && n==1) return grid[0][0];
        vector<vector<int>> dp(m,vector<int>(n,-1));
         solve(m-1,n-1,grid,dp,m,n);

         
        return dp[m-1][n-1];
    }
};