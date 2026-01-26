// Last updated: 1/26/2026, 8:35:53 AM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ma=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());
        if(mi==ma) return 0;
        return 1;
    }
};