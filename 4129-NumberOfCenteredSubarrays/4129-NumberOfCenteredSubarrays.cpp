// Last updated: 1/26/2026, 8:35:35 AM
class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                for(int k=i;k<=j;k++){
                    if(sum==nums[k]){
                        res++;
                        break;
                    }
                }
            }
        }
        return res;
        
    }
};