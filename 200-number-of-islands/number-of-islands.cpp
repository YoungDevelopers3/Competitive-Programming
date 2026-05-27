class Solution {
public:

    void dfs(int i,int j,int m,int n,vector<vector<char>>& grid, vector<vector<bool>>& visited){
        
        if(i<0 ||j<0 || i>=n || j>=m || grid[i][j]=='0'||visited[i][j]){
            return;
        }
        visited[i][j]=true;
        dfs(i-1,j,m,n,grid,visited);
        dfs(i+1,j,m,n,grid,visited);
        dfs(i,j-1,m,n,grid,visited);
        dfs(i,j+1,m,n,grid,visited);
    }




    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int islands=0;
         vector<vector<bool>>visited(n,vector<bool>(m,false));
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    
                    islands++;
                    dfs(i,j,m,n,grid,visited);
                }
            }
         }
         return islands;



    }
};