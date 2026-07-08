class Solution {
  public:
  
    int calc(string &s1,string &s2, int i,int j,vector<vector<int>> &dp){
        if(i==0 || j==0){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+calc(s1,s2,i-1,j-1,dp);
        }
        else{
            dp[i][j]=max(calc(s1,s2,i-1,j,dp),calc(s1,s2,i,j-1,dp));
        }
        
        return dp[i][j];
        
    }
  
  
    int lcs(string &s1, string &s2) {
        // code here
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return calc(s1,s2,n,m,dp);
        
    }
};
