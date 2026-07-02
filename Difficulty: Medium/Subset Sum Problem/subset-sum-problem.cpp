class Solution {
  public:
  
   bool calc(int sum,vector<int> &arr,int n,vector<vector<int>> &dp)
   {
       
         if(sum==0){
             return true;
         }
         
         if(n==0){
             return false;
         }
         
         if(dp[n][sum]!=-1){
             return dp[n][sum];
         }
         
         int pick=0;
         if(arr[n-1]<=sum){
             pick=calc(sum-arr[n-1],arr,n-1,dp);
         }
         
         int notpick=calc(sum,arr,n-1,dp);
         return dp[n][sum]=max(pick,notpick);
   }
 
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return calc(sum,arr,n,dp);
    }
};