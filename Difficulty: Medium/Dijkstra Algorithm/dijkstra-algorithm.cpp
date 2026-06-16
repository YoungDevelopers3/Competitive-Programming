class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>> adj(V);
        
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
        pq.emplace(0,src);
        
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            
            int d=top.first;
            int node=top.second;
            
            if(d>dist[node]){
                continue;
            }
            
            for(auto it:adj[node]){
                int adjNode=it.first;
                int edgeWeight=it.second;
                
                if(d+edgeWeight <dist[adjNode]){
                    dist[adjNode]=d+edgeWeight;
                    pq.emplace(dist[adjNode],adjNode);
                }
                
            }
            
        }
        return dist;
    }
};