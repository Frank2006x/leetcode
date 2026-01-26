// Last updated: 1/26/2026, 8:37:18 AM
class Solution {
public:
    int bestClosingTime(string cus) {

        int res = 0;
        int mp = 0;
        int n = cus.size();
        vector<int> pre(n, 0);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (cus[i] == 'N')
                    pre[i] = 1;
                else 
                    mp++;

            } else {

                if (cus[i] == 'N') {
                    pre[i] = pre[i - 1] + 1;
                } else {
                    pre[i] = pre[i - 1];
                    mp++;
                }
            }
        }
        
        

        for (int i = 0; i < cus.size(); i++) {
            int p = 0;
            if (i != 0) {
                p += pre[i - 1];
            }
            p += (n-i) - (pre[n - 1] - pre[i]+1) ;
            if (p < mp) {
                mp = p;
                res = i+1;
            }
        }
        return res;
    }
};