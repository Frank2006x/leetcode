// Last updated: 1/26/2026, 8:37:56 AM
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<long long> dist(n, LLONG_MAX);
        vector<int> ways(n,0);
        
        priority_queue<pair<long long,int>, vector<pair<long long,int>>,
                       greater<pair<long long,int>>>
            pq;

        vector<vector<pair<int, int>>> adj(n);

        for (auto r : roads) {
            adj[r[0]].push_back({r[1], r[2]});
            adj[r[1]].push_back({r[0], r[2]});
        }
        dist[0] = 0;
        ways[0]=1;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [dis, node] = pq.top();
            pq.pop();

            if (dis > dist[node])
                continue;

            for (auto it : adj[node]) {
                int dd = it.second;
                int dn = it.first;
                if(dd + dist[node] == dist[dn]){
                    ways[dn]=((ways[dn] %1000000007)+ways[node])%1000000007;
                }

                if (dd + dist[node] < dist[dn]) {
                    dist[dn] = dd + dist[node];
                    ways[dn]=ways[node];

                    pq.push({dist[dn], dn});

                    
                }
                
            }
           
        }

        return ways[n-1]%1000000007;
    }
};