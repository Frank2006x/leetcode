// Last updated: 1/26/2026, 8:38:16 AM
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
             [](auto& a, auto& b) { return a[1] > b[1]; });

        int load = 0;
        for (auto box : boxTypes) {
            int take = min(box[0], truckSize);
            load += take * box[1];
            truckSize -= take;
            if (truckSize == 0) break;
        }
        return load;
    }
};