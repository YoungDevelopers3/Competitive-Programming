class Solution {
  public:
    int minCostPath(vector<vector<int>>& mat) {
        // code here
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>pq;
                       
         int n=mat.size();
         int m=mat[0].size();
         
         //creating a distance matrix ,initialized with a large value
         vector<vector<int>>dist(n,vector<int>(m,1e9));
         dist[0][0]=0; //distance for the source cell
         pq.push({0,{0,0}}); //pushing the source cell to the priority queue
         
         //creating array to make 4-way iteration easy
         int iterate_row[]={-1, 0, 1, 0};
         int iterate_col[]={0, 1, 0, -1};
         
                       
         //starting the dijkstras algo
         while(!pq.empty()){
             auto it=pq.top();
             pq.pop();
             int diff=it.first;// this is the current effort being made
             int row=it.second.first;
             int col=it.second.second;
             
             if(row==n-1 && col==m-1){
                 return diff;
             }
             
             //checking possibilities for 4 possible directions
            for(int i=0;i<4;i++){
                int new_row=row+iterate_row[i];
                int new_col=col+iterate_col[i];
                
                if(new_row>=0 && new_col>=0 && new_row<n && new_col<m){
                    int newEffort=max(abs(mat[row][col]-mat[new_row][new_col]),diff);
                    
                    //if the calculated effor is less, update and push it to the queue
                    if(newEffort <dist[new_row][new_col]){
                        dist[new_row][new_col]=newEffort;
                        pq.push({newEffort,{new_row,new_col}});
                    }
                }
                
            }
             
         }
        return 0;               
                       
    }
};
