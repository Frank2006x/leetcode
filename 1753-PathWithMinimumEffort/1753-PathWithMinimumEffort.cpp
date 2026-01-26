// Last updated: 1/26/2026, 8:38:28 AM
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> dist(n,vector<int> (m,1e9));

        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

        pq.push({0,{0,0}});
        dist[0][0]=0;
        vector<pair<int,int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        while(!pq.empty()){
            auto top=pq.top();
            int e=top.first;
            int x=top.second.first;
            int y=top.second.second;
            pq.pop();

            if(e>dist[x][y]) continue;
            for(auto [dx,dy]:dir){
                int fx=x+dx;
                int fy=y+dy;

                if(fx>=0 && fy>=0 && fx<n && fy<m){
                    int ed=heights[fx][fy];
                    int diff=abs(ed-heights[x][y]);
                    if(max(diff,dist[x][y])<dist[fx][fy]){
                        dist[fx][fy]=max(diff,dist[x][y]);
                        pq.push({dist[fx][fy],{fx,fy}}); 
                    }
                }
            }

        }



        return dist[n-1][m-1];
    }
};