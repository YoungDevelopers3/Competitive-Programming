class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int>ans;
        int V=adj.size();
        vector<int>Visited(V,false);
        queue<int>Q;
        Q.push(0);
        Visited[0]=true;
        
        while(Q.size()>0){
          int u=Q.front();
          ans.push_back(u);
          Q.pop();
          for(int v:adj[u]){
              if(!Visited[v]){
                  Visited[v]=true;
                  Q.push(v);
              }
          }
        
            
        }
        return ans;
        
        
    }
};