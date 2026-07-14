class Solution {
public:
    int calc(int i,int j,string &word1,string &word2,vector<vector<int>> &dp){
         if(i==0 || j==0){
            return 0;
         }
         if(dp[i][j]!=-1){
            return dp[i][j];
         }
         if(word1[i-1]==word2[j-1]){
            dp[i][j]=1+calc(i-1,j-1,word1,word2,dp);
         }
         else{
            dp[i][j]=max(calc(i,j-1,word1,word2,dp),calc(i-1,j,word1,word2,dp));
         }
       
       return dp[i][j];
    }

    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int lcs=calc(n,m,word1,word2,dp);

        int ans=(n-lcs)+(m-lcs);
        return ans;
    }
};