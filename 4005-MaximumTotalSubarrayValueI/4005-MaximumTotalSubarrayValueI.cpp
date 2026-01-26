// Last updated: 1/26/2026, 8:35:50 AM
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int Max=INT_MIN;
        int Min=INT_MAX;
        for(int i:nums){
            Max=max(Max,i);
            Min=min(Min,i);
        }
 
        return 1LL*(Max-Min)*k;
    }
};