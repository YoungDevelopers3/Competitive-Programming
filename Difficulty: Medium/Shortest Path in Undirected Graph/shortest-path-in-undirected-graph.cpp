class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // creating a adjacency list
        vector<int>adj[V];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            
        }
        
        //distance array from each node from the source ,initalized to infinity
        vector<int>dist(V,INT_MAX);
        dist[src]=0 ;//distance of source from the source will be zero by default
        queue<int>q;
        q.push(src);
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto neighbour:adj[node]){
                if(dist[node]+1<dist[neighbour]){
                    dist[neighbour]=dist[node]+1;
                    q.push(neighbour);
                }
            }
        }
        
        for(int i=0;i<V;i++){
            if(dist[i]==INT_MAX){
                dist[i]=-1;
            }
        }
        return dist;
        
        
    }
};
