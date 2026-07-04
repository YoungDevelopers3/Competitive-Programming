class Solution {
  public:
  
    int calc(vector<int>& arr,vector<vector<int>>& dp,int n,int ans){
        
        if(n==0){
            return ans==0 ? 1:0;
        }    
        
        if(dp[n][ans]!=-1){
            return dp[n][ans];
        }
        
        int pick=0;
        if(arr[n-1]<=ans){
            pick=calc(arr,dp,n-1,ans-arr[n-1]);
        }
        
        int not_pick=calc(arr,dp,n-1,ans);
        
        return dp[n][ans]=pick+not_pick;
        
        
    }
 
    int totalWays(vector<int>& arr, int target) {
        //  code here
        
        int sum=0;
        for(int i:arr){
            sum=sum+i;
        }
        
        if((target+sum)%2!=0 || abs(target)>sum){
            return 0;
        }
        
        int ans=(target+sum)/2;
        
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(ans+1,-1));
       return calc(arr,dp,n,ans);
        
    }
};