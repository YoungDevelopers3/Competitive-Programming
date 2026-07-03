class Solution {
  public:
  
  
   bool calc(int sum,int n,vector<int>& arr, vector<vector<int>>& dp){
       
       if (n == 0) {
        return sum == 0 ? 1 : 0;    // only decide here, after all elements considered
    }
        
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        
        bool pick=false;
        if(arr[n-1]<=sum){
            pick=calc(sum-arr[n-1],n-1,arr,dp);
        }
        
        bool notpick=calc(sum,n-1,arr,dp);
        
        return dp[n][sum]=pick||notpick;
       
   }
 
    bool equalPartition(vector<int>& arr) {
        // code here
        int s=0;
        for(int i:arr){
            s=s+i;
        }
        if(s%2!=0){
            return false;
        }
        
        int n=arr.size();
        int sum=s/2;
        vector<vector<int>>dp(n+1,vector<int>(s+1,-1));
        
        return calc(sum,n,arr,dp);
        
        
        
    }
};