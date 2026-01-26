// Last updated: 1/26/2026, 8:37:15 AM
class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> count;
        for (int x : basket1) count[x]++;
        for (int x : basket2) count[x]++;

        for (auto& [key, val] : count) {
            if (val % 2 != 0) return -1;
        }
        unordered_map<int, int> b1Count, b2Count;
        for (int x : basket1) b1Count[x]++;
        for (int x : basket2) b2Count[x]++;
        int minVal = INT_MAX;
        vector<int> toSwap;
        for(auto&[x,_]:count){
            int diff=abs(b1Count[x]-b2Count[x]);
            if(diff>0){
                for(int i=0;i<diff/2;i++){
                    toSwap.push_back(x);
                }
            }
            minVal=min(minVal,x);
        }
        sort(toSwap.begin(),toSwap.end());
        long long res=0;
        for(int i=0;i<toSwap.size()/2;i++){
            res+=min(toSwap[i],2*minVal);
        }
        return res;
    }
};