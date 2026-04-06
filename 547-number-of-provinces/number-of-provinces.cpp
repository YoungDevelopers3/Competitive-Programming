class Solution {
public:
    void dfs(int city,vector<vector<int>>& isConnected,vector<bool> &visited){
        visited[city]=true;
        for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[city][j] == 1 && !visited[j]) {
                dfs(j, isConnected, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<bool>visited(V,false);
        int provinces =0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                provinces++;
                dfs(i,isConnected,visited);
            }
        }
        return provinces;
    }
};