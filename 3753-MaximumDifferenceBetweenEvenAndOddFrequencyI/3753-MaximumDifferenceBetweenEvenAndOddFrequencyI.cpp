// Last updated: 1/26/2026, 8:36:20 AM
class Solution {
public:
    int maxDifference(string s) {
        vector <int> count(26,0);
        int maxC=INT_MIN;
        int minC=INT_MAX;
        for (char i:s){
            count[i-'a']++;
        }
        for(char i:s){
            if(count[i-'a']%2==0 && count[i-'a']!=0){
                minC=min(minC,count[i-'a']);
            }else{
                maxC=max(maxC,count[i-'a']);
            }
        }
        return maxC-minC;
    }
};