class Solution {
  public:
    int calc(vector<int>& arr,int target,int n, vector<vector<int>>& dp){
        if (n == 0) {
        return target == 0 ? 1 : 0;    
    }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        int pick=0;
        if(arr[n-1]<=target){
            pick=calc(arr,target-arr[n-1],n-1,dp);
        }
        int not_pick=calc(arr,target,n-1,dp);
        
        return dp[n][target]=pick+not_pick;
        
        
        
    }
  
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        
        return calc(arr,target,n,dp);
        
        
    }
};