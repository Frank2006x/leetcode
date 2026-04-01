class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=INT_MAX;
        int profit=0;
        for(int i:prices){
            mi=min(mi,i);
            profit=max(profit,i-mi);
        }
        return profit;
    }
};