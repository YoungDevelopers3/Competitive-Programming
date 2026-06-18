// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        
        vector<int>dist(V,1e8);
        dist[src]=0;
    
        //Relaxing all the edges for V-1 times
        for(int i=0;i<V-1;i++){
            for(auto edge:edges){
                int u=edge[0];
                int v=edge[1];
                int w=edge[2];
                
                if(dist[u]!=1e8 && dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                }
            }
        }
        
        //checking for negative cycle 
        for(auto edge :edges){
             int u=edge[0];
                int v=edge[1];
                int w=edge[2];
                
                if(dist[u]!=1e8 && dist[u]+w<dist[v]){
                    return {-1};
                }
        }
        
        return dist;
        
        
        
    }
};
