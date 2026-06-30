class Solution {
  public:
  
    int calc(int W,vector<int> &val, vector<int> &wt,int n,vector<vector<int>> &memo){
        if(n==0||W==0){
            return 0;
        }
        
        if(memo[n][W]!=-1){
            return memo[n][W];
        }
        
       int pick=0;
       if(wt[n-1]<=W){
           pick=val[n-1]+calc(W-wt[n-1],val,wt,n-1,memo);
       }
       int notPick=calc(W,val,wt,n-1,memo);
       
       return memo[n][W]=max(pick,notPick);
    }  
  
  
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>>memo(n+1,vector<int>(W+1,-1));
        return calc(W,val,wt,n,memo);
    }
};