class Solution {
  public:
  int calc(vector<int> &arr,vector<vector<int>> &dp,int i,int j){
      
      if(j-i<=1){
          return 0;
      }
      if(dp[i][j]!=-1){
          return dp[i][j];
      }
      
      int result=INT_MAX;
      for(int k=i+1;k<j;k++){
          int ans=calc(arr,dp,i,k)+calc(arr,dp,k,j)+(arr[i]*arr[k]*arr[j]);
          result=min(ans,result);
      }
      dp[i][j]=result;
      return result;
      
  }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return calc(arr,dp,0,n-1);
        
    }
};