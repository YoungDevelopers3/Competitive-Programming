class Solution {
  public:
  void dfs(int row,int col,vector<vector<int>> &visited,vector<vector<char>>& grid){
      int n=grid.size();
      int m=grid[0].size();
      visited[row][col]=1;
      vector<int>row_traverse={-1,+1,0,0};
      vector<int>col_traverse={0,0,-1,+1};
      
      for(int i=0;i<4;i++){
          int new_row=row+row_traverse[i];
          int new_col=col+col_traverse[i];
          if(new_row>=0 && new_col>=0 && new_row<n && new_col<m && visited[new_row][new_col]==0 && grid[new_row][new_col]=='O'){
              dfs(new_row,new_col,visited,grid);
          }
      }
      
      
  }
    void fill(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>visited(n,vector<int>(m,0));
        
        for(int i=0;i<m;i++){
            if(grid[0][i]=='O' && visited[0][i]==0){
                dfs(0,i,visited,grid);
            }
            if(grid[n-1][i]=='O' && visited[n-1][i]==0){
                dfs(n-1,i,visited,grid);
            }
        }
        
        for(int i=0;i<n;i++){
            if(grid[i][0]=='O' && visited[i][0]==0){
                dfs(i,0,visited,grid);
            }
            if(grid[i][m-1]=='O' && visited[i][m-1]==0){
                dfs(i,m-1,visited,grid);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='O' && visited[i][j]==0){
                    grid[i][j]='X';
                }
            }
        }
        
        
    }
};