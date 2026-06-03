class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        vector<vector<int>>distance(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
              if(mat[i][j]==0){
                q.push({{i,j},0});
                visited[i][j]=1;
              }
           }    
        }
        vector<int>row_traverse={-1,0,1,0};
        vector<int>col_traverse={0, +1, 0, -1};

        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int d=q.front().second;
            q.pop();
            distance[row][col]=d;
            for(int i=0;i<4;i++){
                int new_row=row+row_traverse[i];
                int new_col=col+col_traverse[i];
                if(new_row>=0 && new_row<n && new_col>=0 && new_col<m && visited[new_row][new_col]==0){
                    visited[new_row][new_col]=1;
                    q.push({{new_row,new_col},d+1});
                }
            }
        }
        return distance;


    }
};