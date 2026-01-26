// Last updated: 1/26/2026, 8:36:02 AM
class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int start=0;
        int c=0;
        int maxVal=weight[0];
        for(int end=1;end<weight.size();end++){
            maxVal=max(maxVal,weight[end]);
            if(weight[end]<maxVal){
                c++;
                start=end+1;
                if(start<weight.size()){
                    maxVal=weight[start];
                }
                end=start;
            }
        }
        return c;
    }
};