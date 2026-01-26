// Last updated: 1/26/2026, 8:37:26 AM
class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> q;
        for(int i:amount){
            if(i!=0){

            q.push(i);
            }
        }
        int res=0;
        while(!q.empty() && q.size()>=2){
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            a--;
            b--;
            res++;
            if(a>0) q.push(a);
            if(b>0) q.push(b);
        }
        if(!q.empty()){
            res+=q.top();
        }
        return res;
    }
};