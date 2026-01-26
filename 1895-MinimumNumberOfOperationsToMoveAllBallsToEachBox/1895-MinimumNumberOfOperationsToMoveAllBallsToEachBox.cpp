// Last updated: 1/26/2026, 8:38:13 AM
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res(boxes.size(),0);
        vector<int> prefixSum(boxes.size(),0), suffixSum(boxes.size(),0);
        int count=(boxes[0]=='0')?0:1;
        for(int i=1;i<boxes.size();i++){
            prefixSum[i]=prefixSum[i-1]+count;
            count+=(boxes[i]=='0')?0:1;
        }
        count=(boxes[boxes.size()-1]=='0')?0:1;
        for(int i=boxes.size()-2;i>=0;i--){
            suffixSum[i]=suffixSum[i+1]+count;
            count+=(boxes[i]=='0')?0:1;
        }
        for(int i=0;i<boxes.size();i++){
            res[i]=suffixSum[i]+prefixSum[i];
        }
        return res;
    }
};