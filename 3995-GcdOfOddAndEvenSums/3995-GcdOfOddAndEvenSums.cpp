// Last updated: 1/26/2026, 8:35:56 AM
class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int e=0;
        int o=0;
        int i=1;
        int j=2;
        while(n--){
            e+=j;
            j+=2;
            o+=i;
            i+=2;
        }
        return gcd(e,o);
    }
};