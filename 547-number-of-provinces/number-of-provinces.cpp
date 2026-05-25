class Solution {
public:

    void dfs(int start,vector<vector<int>>& isConnected, vector<int>& visited){
        visited[start]=true;
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i] && isConnected[start][i]==1){
                dfs(i,isConnected,visited);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<int>visited(v,false);
        int provinces =0;
        for(int i=0;i<v;i++){
            if(!visited[i]){
                provinces++;
                dfs(i,isConnected,visited);
            }
        }
        return provinces;


    }
};