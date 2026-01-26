// Last updated: 1/26/2026, 8:37:48 AM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minTerm=INT_MAX;
        int diff=-1;
        for (int i=0;i<nums.size();i++){
            minTerm=min(minTerm,nums[i]);
            int temp=nums[i]-minTerm;
            diff=max(temp,diff);
        }
        
        return diff==0?-1:diff;
    }
};