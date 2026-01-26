// Last updated: 1/26/2026, 8:36:14 AM
class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> set;
        for(int i:nums){
            if(i<0){
                continue;
            }
            set.insert(i);
        }
        int sum=0;
        for(int i:set){
            sum+=i;
        }
        if(sum==0){
            int Min=INT_MIN;
            for(int i:nums){
                Min=max(i,Min);
            }
            return Min;
        }
        return sum;
    }
};