// Last updated: 1/26/2026, 8:35:24 AM
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int index=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                index=i;
            }
        }
        return index;
    }
};