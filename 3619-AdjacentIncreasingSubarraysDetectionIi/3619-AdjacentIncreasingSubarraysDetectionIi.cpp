// Last updated: 1/26/2026, 8:36:23 AM
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int mk=0;
        int k=1;
        int prev=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                k++;
            }else{
                mk=max({mk,k/2,min(k,prev)});
                prev=k;
                k=1;
            }
            
        }
        return max({mk,k/2,min(k,prev)});
    }
};