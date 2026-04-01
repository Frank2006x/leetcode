class Solution {
public:
    int solve(string w1,string w2,int i,int j,vector<vector<int>> &dp){
        if(j<0){
            return i+1;
        }
        if(i<0){
            return j+1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(w1[i]==w2[j]){
            return dp[i][j]=solve(w1,w2,i-1,j-1,dp);
        }
        return dp[i][j]=1+min({solve(w1,w2,i,j-1,dp),solve(w1,w2,i-1,j,dp),solve(w1,w2,i-1,j-1,dp)});
    }
    int minDistance(string w1, string w2) {
        int n=w1.size();
        int m=w2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(j==0){
                    dp[i][j]=i;
                    continue;
                }
                if(i==0){
                    dp[i][j]=j;
                    continue;
                }
                if(w1[i-1]==w2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                }
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        return dp[n][m];
    }
};