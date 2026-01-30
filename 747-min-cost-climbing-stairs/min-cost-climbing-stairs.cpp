class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dist(n,0);
       
        dist[0]=cost[0];
        dist[1]=cost[1];

        for(int i=2;i<n;i++){
            if(dist[i-1]>dist[i-2]){
                dist[i]=dist[i-2]+cost[i];
            }else{
                dist[i]=dist[i-1]+cost[i];
            }
        }
        
        
        return min(dist[n-1],dist[n-2]);
    }
};