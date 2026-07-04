class Solution {
  public:
  
    bool calc(vector<int>& arr,vector<vector<int>>& dp,int n,int i){
        if(n==0){
            if(i==0){
                return true;
            }
            return false;
        }
        
        if(dp[n][i]!=-1){
            return dp[n][i];
        }
        
        bool pick=false;
        if(arr[n-1]<=i){
            pick=calc(arr,dp,n-1,i-arr[n-1]);
        }
        
        bool not_pick=calc(arr,dp,n-1,i);
        
        return dp[n][i]=pick||not_pick;
        
    }  
  
    int minDifference(vector<int>& arr) {
        // code here
        int n=arr.size();
        int total=0;
        for(int i:arr){
            total=total+i;
        }
        
        int diff=INT_MAX;
        vector<vector<int>>dp(n+1,vector<int>(total+1,-1));
        
        for(int i=0;i<=total/2;i++){
            
            if(calc(arr,dp,n,i)){
                diff=min(diff,total-(2*i));
            }
        }
        
        return diff;
        
    }
};
