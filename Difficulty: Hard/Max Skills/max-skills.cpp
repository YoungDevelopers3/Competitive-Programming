class Solution {
  public:
   
   int calc(int i,int j,vector<int> &arr,vector<vector<int>> &dp){
       
       if(j-i<=1){
           return 0;
       }
       if(dp[i][j]!=-1){
           return dp[i][j];
       }
       
       int ans=INT_MIN;
       for(int k=i+1;k<j;k++){
          
          int temp=calc(i,k,arr,dp)+calc(k,j,arr,dp)+(arr[i]*arr[k]*arr[j]);
          ans=max(ans,temp);
       }
       dp[i][j]=ans;
       return ans;
       
   }
  
  
    int maxSkill(vector<int> &arr) {
        // code here
        arr.insert(arr.begin(),1);
        arr.push_back(1);
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return calc(0,n-1,arr,dp);
        
    }
};