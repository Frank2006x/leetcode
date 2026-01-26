// Last updated: 1/26/2026, 8:35:54 AM
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> s;
        for(int i:nums){
            s.insert(i);
        }
        vector<int>res;
        int i=0;
        auto it=s.rbegin();
        int sn=s.size();
        while(k-- && sn>0){
            res.push_back(*it);
            it++;
            sn--;
        }
        return res;
    }
};