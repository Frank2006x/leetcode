// Last updated: 1/26/2026, 8:38:08 AM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int res=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            res=max(res,nums[i]+nums[n-i-1]);
        }  
        return res;
    }
};