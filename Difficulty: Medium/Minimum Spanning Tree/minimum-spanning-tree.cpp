class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        
        // Convert edges to adjacency list
        for(auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }
        
        // min heap: {weight, node}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;
        
        vector<int> visited(V, 0);
        
        pq.push({0, 0});
        int sum = 0;
        
        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            
            int wt = it.first;
            int node = it.second;
            
            if(visited[node]) {
                continue;
            }
            
            visited[node] = 1;
            sum += wt;
            
            for(auto it : adj[node]) {
                int adjNode = it.first;
                int edgeWeight = it.second;
                
                if(!visited[adjNode]) {
                    pq.push({edgeWeight, adjNode});
                }
            }
        }
        
        return sum;
    
    }
};