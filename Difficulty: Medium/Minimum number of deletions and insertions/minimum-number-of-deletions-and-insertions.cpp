class Solution {

  public:
  
    int calc(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){
        if(i==0 ||j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+calc(i-1,j-1,s1,s2,dp);
        }
        else{
            dp[i][j]=max(calc(i-1,j,s1,s2,dp),calc(i,j-1,s1,s2,dp));
        }
        
        return dp[i][j];
        
    }
  
    int minOperations(string &s1, string &s2) {
        // Your code goes here
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int l=calc(n,m,s1,s2,dp);
        int ans=(n-l)+(m-l);
        return ans;
        
    }
};