// Last updated: 1/26/2026, 8:35:59 AM
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int res=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            for(int j=0;j<waterStartTime.size();j++){
                int landStart=landStartTime[i];
                int landEnd=landStartTime[i]+landDuration[i];

                int waterStart=max(landEnd,waterStartTime[j]);
                int waterEnd=waterStart+waterDuration[j];
                res=min(waterEnd,res);

                int waterStart2=waterStartTime[j];
                int waterEnd2=waterStart2+waterDuration[j];
                int landStart2=max(waterEnd2,landStartTime[i]);
                int landEnd2=landStart2+landDuration[i];

                res=min(landEnd2,res);
                
            }
        }
        return res;
    }
};