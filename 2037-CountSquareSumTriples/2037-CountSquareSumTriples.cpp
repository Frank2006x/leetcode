// Last updated: 1/26/2026, 8:38:01 AM
class Solution {
public:
    int countTriples(int n) {
        int res=0;
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<=n;k++){
                    if(pow(i,2)+pow(j,2)==pow(k,2)){
                        res+=2;
                    }
                }
            }
        }
        return res;
    }
};