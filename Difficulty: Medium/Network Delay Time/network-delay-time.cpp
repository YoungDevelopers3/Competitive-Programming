class Solution {
  public:
    int findDelayTime(int V, vector<vector<int>> &edges, int src) {
        // code here
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
       
    for(int i=0;i<V-1;i++){
         bool change=false;
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            
            if(dist[u]!=INT_MAX && dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                change=true;
            }
        
        }
        if(change==false){
            break;
        }
    }
    int ans=0;
    
    for(int i=0;i<V;i++){
        if(dist[i]==INT_MAX){
            return -1;
        }
        ans=max(dist[i],ans);
    }
    return ans;
        
        
        
        
        
        
        
    }
};