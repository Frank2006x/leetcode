// Last updated: 1/26/2026, 8:36:37 AM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res=0;
        for(int i:nums){
            if(i%3!=0){
                res++;
            }
        }
        return res;
    }
};