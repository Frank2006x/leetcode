// Last updated: 1/27/2026, 8:06:19 AM
class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto e:edges){
            adj[e[0]].push_back({e[2],e[1]});
            adj[e[1]].push_back({e[2]*2,e[0]});
        }
        priority_queue< pair<int,int> ,vector<pair<int,int>> ,greater<> > pq;
        pq.push({0,0});
        vector<int> dist(n,1e9);
        dist[0]=0;

        while(pq.size()>0){
            auto it=pq.top();
            int d=it.first;
            int node=it.second;
            pq.pop();
            if(d>dist[node]) continue;
            for(auto u:adj[node]){
                if(dist[u.second]==-1 || dist[u.second]>u.first+dist[node]){
                    dist[u.second]=dist[node]+u.first;
                    pq.push({dist[u.second],u.second});
                }
            }
            
        }
        if(dist[n-1]==1e9) return -1;
        return dist[n-1];
    }
};