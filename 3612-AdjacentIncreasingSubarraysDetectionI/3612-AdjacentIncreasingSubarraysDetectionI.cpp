// Last updated: 1/26/2026, 8:36:26 AM
class Solution {
public:
    bool checkInc(vector<int> &nums,int start,int end){
        
        for(int i=start+1;i<=end;i++){
            if(nums[i-1]>=nums[i]){
                return false;
            }
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(k<=1) return true;
        for(int i=0;i+2*k<=nums.size();i++){
            bool c1=checkInc(nums,i,i+k-1);
            bool c2=checkInc(nums,i+k,i+k+k-1);
            if(c1 && c2){
                return true;
            }
        }
        return false;
    }
};