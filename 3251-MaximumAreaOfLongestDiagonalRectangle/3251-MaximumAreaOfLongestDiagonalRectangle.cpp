// Last updated: 1/26/2026, 8:36:45 AM
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double ml=INT_MIN;
        int a=INT_MIN;
        for(auto i : dimensions){
            double k=sqrt(i[0]*i[0]+i[1]*i[1]);
         
            if(ml<k){
                ml=k;
                a=i[0]*i[1];
            }
            if(ml==k){
                a=max(a,i[0]*i[1]);
            }
        }
        return a;
    }
};