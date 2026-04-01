class Solution {
public:
    bool solve(string &s,string &p,int i,int j,vector<vector<int>> &dp){
        if(i <0 && j<0) return true;
        if(i<0 && p[j]=='*'){
            return dp[i+1][j+1]=solve(s,p,i,j-1,dp);
        }
        if(i<0 || j<0) return false;
        if(dp[i+1][j+1]!=-1) return dp[i+1][j+1];
        if(s[i]==p[j]){
            return dp[i+1][j+1]=solve(s,p,i-1,j-1,dp);
        }
        else if(p[j]=='*'){
            return dp[i+1][j+1]=solve(s,p,i-1,j,dp) || solve(s,p,i-1,j-1,dp) || solve(s,p,i,j-1,dp);
        }
        else if(p[j]=='?'){
            return dp[i+1][j+1]=solve(s,p,i-1,j-1,dp);
        }else{
            return false;
        }
    }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(s,p,n-1,m-1,dp);
    }
};