class Solution {
  public:
  int calc(int n,vector<int> &price,vector<vector<int>> &dp,int rem_len){
      if(n==0){
          return 0;
      }
      if(dp[n][rem_len]!=-1){
          return dp[n][rem_len];
      }
      
      int not_take=calc(n-1,price,dp,rem_len);
      int take=0;
      if(n<=rem_len){
          take=price[n-1]+calc(n,price,dp,rem_len-n);
      }
      
      return dp[n][rem_len]=max(take,not_take);
      
      
      
  }
    int cutRod(vector<int> &price) {
        // code here
        int n=price.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return calc(n,price,dp,n);
    }
};