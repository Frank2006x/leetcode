class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        if(n==1) return nums[0];
        dp[0]=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            res=max(res,dp[i]);
        }
        return res;
    }
};