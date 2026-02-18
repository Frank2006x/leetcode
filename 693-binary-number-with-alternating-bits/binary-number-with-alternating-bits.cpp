class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool isOne = n & 1;
        n>>=1;
        while (n > 0) {
            
            if (isOne) {
                if(n & 1 ){
                    return false;
                }
                
            } else {
                if((n & 1) == 0){
                    return false;
                }
            }
            isOne=!isOne;
            n>>=1;
        }
        return true;
    }
};