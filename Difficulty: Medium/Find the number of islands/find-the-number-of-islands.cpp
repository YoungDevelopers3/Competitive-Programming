class Solution {
  public:
  
    void dfs(int i,int j,vector<vector<bool>> &visited,vector<vector<char>> &grid,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || visited[i][j] || grid[i][j]!='L'){
            return;
        }
        
        visited[i][j]=true;
        dfs(i-1,j,visited,grid,n,m);
          dfs(i,j+1,visited,grid,n,m);
          dfs(i+1,j,visited,grid,n,m);
          dfs(i,j-1,visited,grid,n,m);
          
           dfs(i-1, j-1, visited, grid, n, m);   // top-left
        dfs(i-1, j+1, visited, grid, n, m);   // top-right
        dfs(i+1, j-1, visited, grid, n, m);   // bottom-left
        dfs(i+1, j+1, visited, grid, n, m);   // bottom-right
        
    }
  
  
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L' && !visited[i][j]){
                    dfs(i,j,visited,grid,n,m);
                    ans++;  
                }
            }
        }
        
        return ans;
        
    }
};