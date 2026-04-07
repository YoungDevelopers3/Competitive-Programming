class Solution {
  public:
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==2){
                    q.push({{i,j},0});
                    visited[i][j]=true;
                }
            }
        }
        
        while(q.size()>0){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int time=q.front().second;
            q.pop();
            
            ans=max(ans,time);
            
            //top element
            if(i-1>=0 && !visited[i-1][j] && mat[i-1][j]==1){
                q.push({{i-1,j},time+1});
                visited[i-1][j]=true;
            }
            
            //right element
            if(j+1<m && !visited[i][j+1] && mat[i][j+1]==1){
                q.push({{i,j+1},time+1});
                visited[i][j+1]=true;
            }
            
            //bottom element
            
            if(i+1<n && !visited[i+1][j] && mat[i+1][j]==1){
                q.push({{i+1,j},time+1});
                visited[i+1][j]=true;
            }
            
            //left element
            
            if(j-1>=0 && !visited[i][j-1] && mat[i][j-1]==1){
                q.push({{i,j-1},time+1});
                visited[i][j-1]=true;
            }
            
            
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && !visited[i][j]){
                    return -1;
                }
            }
        }
        
        return ans;
        
    }
};