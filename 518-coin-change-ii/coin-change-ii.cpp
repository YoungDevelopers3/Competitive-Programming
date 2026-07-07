class Solution {
public:

    int calc(int n,int amount,vector<int>& coins,vector<vector<int>>& dp){
        if(n==0){
            return amount==0? 1:0;
        }

        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }

        int not_take=0;
        not_take=calc(n-1,amount,coins,dp);
        int take=0;
        if(coins[n-1]<=amount){
            take=calc(n,amount-coins[n-1],coins,dp);
        }
        
        return dp[n][amount]=take+not_take;


    }
    int change(int amount, vector<int>& coins) {
        
         int n=coins.size();
         vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return calc(n,amount,coins,dp); 

    }
};