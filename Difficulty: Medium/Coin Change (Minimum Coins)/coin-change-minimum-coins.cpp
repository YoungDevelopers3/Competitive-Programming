class Solution {
  public:
  
    int calc(int n,vector<int>& coins,int sum,vector<vector<int>>& dp){
        if(n==0){
            return sum==0 ? 0:1e9; 
        }
        
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        int not_take=0;
        not_take=calc(n-1,coins,sum,dp);
        
        int take=1e9;
        if(coins[n-1]<=sum){
           take=1+calc(n,coins,sum-coins[n-1],dp);
        }
        return dp[n][sum]=min(take,not_take);
    
    }
  
  
    int minCoins(vector<int> &coins, int sum) {
        // code here
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        int ans=calc(n,coins,sum,dp);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};