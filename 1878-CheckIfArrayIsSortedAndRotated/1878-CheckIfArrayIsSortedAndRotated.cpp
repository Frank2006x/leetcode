// Last updated: 1/26/2026, 8:38:12 AM
class Solution {
public:
    bool check(vector<int>& nums) {
        unordered_map<int,int> map;
        int count=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if (nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
        return count<=1;
        
    }
};