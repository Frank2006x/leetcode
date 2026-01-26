// Last updated: 1/26/2026, 8:37:38 AM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> map;
        for(int i:nums){
            map.insert(i);
        }
        while(map.find(original)!=map.end()){
            original*=2;
        }
        return original;
    }
};