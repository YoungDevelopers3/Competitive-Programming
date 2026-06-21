class Solution {
  public:
  
  int findParent(int x,vector<int>& parent){
      if(parent[x]==x){
          return x;
      }
      
      return parent[x]=findParent(parent[x],parent);
  }
  
  
  
  
    vector<int> DSU(int n, vector<vector<int>>& queries) {
        // code here
     
        vector<int>parent(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
        vector<int>ans;
        
        for(auto q:queries){
            int type=q[0];
            
            if(type==1){
                int x=q[1];
                int z=q[2];
                
                int parentX=findParent(x,parent);
                int parentZ=findParent(z,parent);
                
                parent[parentX]=parentZ;
            }
            else{
                int x=q[1];
                ans.push_back(findParent(x,parent));
            }
        }
     
        return ans;
        
    }
};