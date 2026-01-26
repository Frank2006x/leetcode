// Last updated: 1/26/2026, 8:38:36 AM
class Solution {
public:
    int cal(int full,int empty,int& numExchange){
        if((full+empty)<numExchange){
            return full;
        }
        return full+cal((full+empty)/numExchange,(full+empty)%numExchange,numExchange);
    }
    int numWaterBottles(int numBottles, int numExchange) {
        return cal(numBottles,0,numExchange);
    }
};