// Last updated: 1/26/2026, 8:35:37 AM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>map;

        for(int i:nums){
            map[i]++;
        }
        int c=k;
        while(true){
            if(map.find(k)==map.end()){
                return k;
            }
            k+=c;
        }
        return -1;

    }
};