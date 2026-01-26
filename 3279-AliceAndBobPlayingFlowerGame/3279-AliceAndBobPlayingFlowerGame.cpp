// Last updated: 1/26/2026, 8:36:43 AM
class Solution {
public:
    long long flowerGame(int n, int m) {
        long long res=0;
        long long e=0;
        long long o=0;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                e++;
            }else{
                o++;
            }
        }
        for(int i=1;i<=m;i++){
            if(i%2==0){
                res+=o;
            }else{
                res+=e;
            }
        }
        return res;
    }
};