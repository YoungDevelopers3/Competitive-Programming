class Solution {
  public:
    int calc(int n,vector<int>& val,vector<int>& wt,int capacity, vector<vector<int>>& dp){
        if(n==0){
            return 0;
        }
        if(dp[n][capacity]!=-1){
            return dp[n][capacity];
        }
        int not_take=0;
        not_take=calc(n-1,val,wt,capacity,dp);
        
        int take=0;
        if(wt[n-1]<=capacity){
            take=val[n-1]+calc(n,val,wt,capacity-wt[n-1],dp);
        }
        
        return dp[n][capacity]=max(take,not_take);
        
        
        
    }
  
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(capacity+1,-1));
        return calc(n,val,wt,capacity,dp);
    
    }
};