class Solution {
public:
    int calc(int n,vector<int>& coins,int amount,vector<vector<int>>& dp){
        if(n==0){
            return amount==0 ? 0:1e9;
        }

        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }

        int not_take=calc(n-1,coins,amount,dp);
        int take=1e9;
        if(coins[n-1]<=amount){
            take=1+calc(n,coins,amount-coins[n-1],dp);
        }
        return dp[n][amount]=min(take,not_take);
        
    } 
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans= calc(n,coins,amount,dp);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};