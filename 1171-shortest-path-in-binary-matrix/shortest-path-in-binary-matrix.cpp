class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
               int n=grid.size();
            
               if(grid[0][0]==1 || grid[n-1][n-1]==1){
                   return -1;
               }       
               queue<pair<pair<int,int>,int>>q;

               vector<vector<int>>visited(n,vector<int>(n,0));

               q.push({{0,0},1});
               visited[0][0]=1;

               int diagonal_rows[8]={-1,-1,-1,0,0,1,1,1};
               int diagonal_cols[8]={-1,0,1,-1,1,-1,0,1};

               while(!q.empty()){
                 auto it=q.front();
                 q.pop();
                 int row=it.first.first;
                 int col=it.first.second;
                 int dist=it.second;
                
                 if(row== n-1 && col==n-1){
                    return dist;
                 }

                 for(int k=0;k<8;k++){
                    int new_row=row+diagonal_rows[k];
                    int new_col=col+diagonal_cols[k];

                     if(new_row>=0 && new_row<n && new_col>=0 && new_col<n && visited[new_row][new_col]==0 && grid[new_row][new_col]==0 ){
                             visited[new_row][new_col]=1;
                             q.push({{new_row,new_col},dist+1});
                    }
                 }

               }
               return -1;
    }
};