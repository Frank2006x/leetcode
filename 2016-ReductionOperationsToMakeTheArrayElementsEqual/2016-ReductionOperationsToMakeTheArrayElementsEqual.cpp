// Last updated: 1/26/2026, 8:38:05 AM
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m = nums[0];
        map<int,int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != m) {
                map[nums[i]]++;
            }
        }
        int res=0;
        int j=1;
        for(auto i:map){
            res+=i.second*j;
            j++;
        }
        return res;
    }
};