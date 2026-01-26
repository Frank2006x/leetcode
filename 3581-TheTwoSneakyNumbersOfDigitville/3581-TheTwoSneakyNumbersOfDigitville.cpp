// Last updated: 1/26/2026, 8:36:30 AM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        vector<int> res;
        for(auto i:map){
            if(i.second>=2){
                res.push_back(i.first);
            }
        }
        return res;
        
    }
};