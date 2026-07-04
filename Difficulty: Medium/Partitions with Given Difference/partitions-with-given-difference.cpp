class Solution {
  public:
    int calc(vector<int>& arr,vector<vector<int>>& dp,int target,int n){
        if(n==0){
            return (target==0 ? 1:0);
        }
        
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        
        int pick=0;
        if(arr[n-1]<=target){
            pick=calc(arr,dp,target-arr[n-1],n-1);
        }
        
        int not_pick=calc(arr,dp,target,n-1);
        
        return dp[n][target]=pick+not_pick;
        
    }
  
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int sum=0;
        for(int i:arr){
            sum=sum+i;
        }
        
        if((sum+diff)%2!=0 || diff>sum){
            return 0;
        }
        int target=(sum+diff)/2;
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return calc(arr,dp,target,n);
        
        
        
    }
};