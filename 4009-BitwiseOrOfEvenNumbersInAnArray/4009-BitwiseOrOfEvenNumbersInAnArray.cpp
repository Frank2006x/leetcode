// Last updated: 1/26/2026, 8:35:47 AM
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int res=0;
        for(int i:nums){
            if(i%2==0){
                res|=i;
            }
        }
        return res;
    }
};