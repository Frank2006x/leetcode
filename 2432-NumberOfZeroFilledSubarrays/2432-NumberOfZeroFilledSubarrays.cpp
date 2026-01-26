// Last updated: 1/26/2026, 8:37:24 AM
class Solution {
public:
    
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0;
        long long res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }else{
                res+=(c*(c+1))/2;
                c=0;
            }
        }
        res+=(c*(c+1))/2;
        return res;
    }
};