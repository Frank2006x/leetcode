// Last updated: 1/26/2026, 8:35:48 AM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,bool> map;
        for(int i:friends){
            map[i]=true;
        }
        vector<int> res;
        for(int i:order){
            if(map[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};