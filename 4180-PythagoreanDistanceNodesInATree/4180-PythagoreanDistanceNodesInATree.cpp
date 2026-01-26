// Last updated: 1/26/2026, 8:35:21 AM
class Solution {
public:
    
    

    void bfs(vector<int>& arr, int node,const vector<vector<int>> &adj) {
        arr[node]=0;
        queue<int> q;
        q.push(node);
        while(q.size()>0){
            int front=q.front();
            q.pop();
            for(int i:adj[front]){
                if(arr[i]==-1){
                    arr[i]=arr[front]+1;
                    q.push(i);
                }
            }
        }
    }

    int specialNodes(int n, vector<vector<int>>& edges, int x, int y, int z) {
        int v = edges.size();
        vector<vector<int>> adj(v+1);
        for (auto e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

       
        vector<int> bx(v+1, -1);
        vector<int> by(v+1, -1);
        vector<int> bz(v+1, -1);

        bfs(by,y,adj);
        bfs(bx,x,adj);
        bfs(bz,z,adj);

       
        int r=0;
        for(int i=0;i<=v;i++){
            if(bx[i]==-1) continue;
            if(by[i]==-1) continue;
            if(bz[i]==-1) continue;
            
            if(pow(bx[i],2)+pow(by[i],2)==pow(bz[i],2)){
                r++;
                continue;
            }
            if(pow(bz[i],2)+pow(by[i],2)==pow(bx[i],2)){
                r++;
                continue;
            }
            if(pow(bz[i],2)+pow(bx[i],2)==pow(by[i],2)){
                r++;
                continue;
            }
            
        }
       

        return r;
    }
};