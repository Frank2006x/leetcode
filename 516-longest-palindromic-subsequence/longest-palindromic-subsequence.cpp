class Solution {
public:
    int solve(string &s,string &rs,int i,int j,vector<vector<int>> &dp){
        if(i <0 || j<0) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==rs[j]){
            return dp[i][j]=1+solve(s,rs,i-1,j-1,dp);
        }
        return dp[i][j]=max(solve(s,rs,i-1,j,dp),solve(s,rs,i,j-1,dp));
    }
    int longestPalindromeSubseq(string s) {
        string rs=s;
        reverse(s.begin(),s.end());
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));

        
        return solve(s,rs,n-1,n-1,dp);
    }
};