// Last updated: 1/26/2026, 8:36:39 AM
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int prevEnd=0;
        for(int i=0;i<meetings.size();i++){
            int start=max(prevEnd+1,meetings[i][0]);
            int length=max(0,meetings[i][1]-start+1);
            days-=length;
            prevEnd=max(prevEnd,meetings[i][1]);
        }
        return days;
    }
};