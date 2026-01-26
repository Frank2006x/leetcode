// Last updated: 1/26/2026, 8:35:58 AM
class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0) return false;
        unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        int g=n/k;
        for(auto &i:map){
            if(i.second>g){
                return false;
            }
        }
        return true;
    }
};