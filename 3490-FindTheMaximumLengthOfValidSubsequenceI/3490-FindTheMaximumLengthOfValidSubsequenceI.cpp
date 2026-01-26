// Last updated: 1/26/2026, 8:36:36 AM
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int o=0;
        int e=0;
        int even_dp=0;
        int odd_dp=0;
        for(int i:nums){
            if(i%2==0) e++;
            else o++;
        } 
        for(int i:nums){
            if(i%2==0){
                even_dp=max(even_dp,odd_dp+1);
            }else{
                odd_dp=max(odd_dp,even_dp+1);
            }
        }

        return max({o,e,even_dp,odd_dp});
    }
};