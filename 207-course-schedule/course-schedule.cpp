class Solution {
public:
    bool isCycleDFS(int src,vector<bool>&visited,vector<bool>recursive_Path,vector<vector<int>>& prerequisites){
             
         visited[src]=true;
         recursive_Path[src]=true;

         for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];
            
            if(u==src){
                if(!visited[v]){
                    if(isCycleDFS(v,visited,recursive_Path,prerequisites)){
                        return true;
                    }
                }
                else if(recursive_Path[v]){
                    return true;
                }
            }
            

         }
         //recursive_Path[src]=false;
            return false;

    }


    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool>visited(numCourses,false);
        vector<bool>recursive_Path(numCourses,false);
        
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(isCycleDFS(i,visited,recursive_Path,prerequisites)){
                    return false;
                }
            }
        }
       return true;;

    }
};