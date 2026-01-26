// Last updated: 1/26/2026, 8:38:19 AM
class Solution {
public:
    int totalMoney(int n) {
        int a=n/7;
        int res=0;
        int b=n%7;
        int ac=a;
        while(a!=0){
            res+=28+(a-1)*7;
            a--;
        }
        for(int i=1;i<=b;i++){
            res+=(i+ac);
        }
        return res;
    }
};