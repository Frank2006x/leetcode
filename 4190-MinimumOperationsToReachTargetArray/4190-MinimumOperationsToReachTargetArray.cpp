// Last updated: 1/26/2026, 8:35:26 AM
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {

        int res=0;
        unordered_map<int,int> map;


        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=target[i] && map.find(nums[i])==map.end()){
                res++;
                map[nums[i]]++;
            }
        }
        
        return res;
    }
};