// Last updated: 1/26/2026, 8:36:12 AM
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int c=0;
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(fruits[i]<=baskets[j]){
                    baskets[j]=-1;
                    c++;
                    break;
                }
            }
        }
        return fruits.size()-c;

    }
};