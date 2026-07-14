class Solution {
public:

    int calc(int i,int j,string &s,vector<vector<int>> &dp){
        if(i>j){
            return 0;
        }
        if(i==j){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i-1]==s[j-1]){
            dp[i][j]=2+calc(i+1,j-1,s,dp);
        }
        else{
            dp[i][j]=max(calc(i+1,j,s,dp),calc(i,j-1,s,dp));
        }
        return dp[i][j];
    }



    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return calc(1,n,s,dp);
    }
};