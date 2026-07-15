class Solution {
public:

    int calc(int i, int j,string &s,string &t,vector<vector<int>> &dp){
        if(i==0||j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i-1]==t[j-1]){
            dp[i][j]=1+calc(i-1,j-1,s,t,dp);
        }
        else{
            dp[i][j]=max(calc(i,j-1,s,t,dp),calc(i-1,j,s,t,dp));
        }
        return dp[i][j];
    }





    int minInsertions(string s) {
        int n=s.length();
        string t=s;
        reverse(t.begin(),t.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int l=calc(n,n,s,t,dp);
        return n-l;
    }
};