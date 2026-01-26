// Last updated: 1/26/2026, 8:36:17 AM
class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        int n=nums.size();
        int c=n/3;
        int k=n-2;
        while(c--){
            sum+=nums[k];
            k-=2;
        }
        
        return sum;
    }
};