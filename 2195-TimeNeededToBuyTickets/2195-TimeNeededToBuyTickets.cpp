// Last updated: 1/26/2026, 8:37:46 AM
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        vector<int> res(n,0);
        deque<int> q;
        for(int i=0;i<tickets.size();i++){
            q.push_back(i);
        }
        int time=0;
        while(!q.empty()){
            int f=q.front();
            

            if(tickets[f]==1){
                q.pop_front();
                tickets[f]--;
                res[f]=time;
            }else {
                tickets[f]--;
                q.pop_front();
                q.push_back(f);
                
            }
            time++;
            
        }
        return res[k]+1;
    }
};