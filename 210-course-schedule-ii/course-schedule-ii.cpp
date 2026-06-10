class Solution {
public:


    bool isCyclicDFS(int node,vector<bool> &visited,vector<bool> &rec_path,vector<vector<int>>& prerequisites){
        visited[node]=true;
        rec_path[node]=true;
        for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];

            if(node==u){
                if(!visited[v]){
                    if(isCyclicDFS(v,visited,rec_path,prerequisites)){
                        return true;
                    }
                    
                }
                else if(rec_path[v]){
                        return true;
                    }
            }
        }
        rec_path[node]=false;
        return false;
    }



    void topoOrder(int node,vector<bool>& visited,stack<int>& st,vector<vector<int>>& prerequisites){
                   visited[node]=true;

                   for(int i=0;i<prerequisites.size();i++){
                     int v=prerequisites[i][0];
                     int u=prerequisites[i][1];

                     if(node==u){
                        if(!visited[v]){
                            topoOrder(v,visited,st,prerequisites);
                        }
                     }
                   }

                   st.push(node);
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool>visited(numCourses,false);
        vector<bool>rec_path(numCourses,false);
        vector<int>ans;

        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(isCyclicDFS(i,visited,rec_path,prerequisites)){
                    return ans;
                }
            }
        }

       stack<int>st;
       visited.assign(numCourses,false);

       for(int i=0;i<numCourses;i++){
           if(!visited[i]){
              topoOrder(i,visited,st,prerequisites);
           }
       }

       while(st.size()>0){

          ans.push_back(st.top());
          st.pop();

       }

       return ans;



    }
};