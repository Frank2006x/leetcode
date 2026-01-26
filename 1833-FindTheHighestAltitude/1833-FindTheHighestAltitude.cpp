// Last updated: 1/26/2026, 8:38:15 AM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0;
        int curr=0;
        for(int i=0;i<gain.size();i++){
            curr+=gain[i];
            res=max(curr,res);
        }   
        return res;
    }
};