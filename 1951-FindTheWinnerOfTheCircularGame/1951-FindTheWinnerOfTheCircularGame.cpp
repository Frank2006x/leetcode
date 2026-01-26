// Last updated: 1/26/2026, 8:38:09 AM
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<bool> visited(n, false);
        int c = n;
        int start = 0;
        int cc = 0;
        while (c > 1) {
            if(!visited[start]){
                cc++;
                if(cc==k){
                    visited[start]=true;
                    c--;
                    cc=0;
                }
            }
            start=(start+1)%n;
        }
        for (int i = 0; i < n; i++) {
            if (visited[i] == false) {
                return i+1;
            }
        }
        return -1;
    }
};