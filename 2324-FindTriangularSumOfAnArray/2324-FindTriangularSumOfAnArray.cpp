// Last updated: 1/26/2026, 8:37:32 AM
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> res;
        for(int i=0;i<nums.size()-1;i++){
            res.push_back(((nums[i]+nums[i+1])%10));
        }
        return triangularSum(res);
    }
};