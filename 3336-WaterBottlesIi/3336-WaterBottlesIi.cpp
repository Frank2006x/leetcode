// Last updated: 1/26/2026, 8:36:42 AM
class Solution {
public:
    int cal(int full,int empty,int numExchange){
        if(full==0 && empty<numExchange){
            return 0;
        }
        if(empty>=numExchange){
            empty-=numExchange;
            numExchange++;
            full++;
            return cal(full,empty,numExchange);
        }
        return full+cal(0,full+empty,numExchange);
    }
    int maxBottlesDrunk(int numBottles, int numExchange) {
        return cal(numBottles,0,numExchange);
    }
};