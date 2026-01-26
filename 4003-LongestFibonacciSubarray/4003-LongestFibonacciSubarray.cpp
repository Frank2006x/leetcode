// Last updated: 1/26/2026, 8:35:51 AM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if (nums.size() <= 2)
            return nums.size();
        int c=2;
        int mc=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-2]+nums[i-1]){
                c++;
            }else{c=2;}
            
            mc=max(c,mc);
        }
        return mc;
    }
};