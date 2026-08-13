class Solution {
public:
    int calc(vector<vector<int>>&dp,string &s,string &t,int i,int j){
        if(i==0||j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i-1]==t[j-1]){
            dp[i][j]=1+calc(dp,s,t,i-1,j-1);
        }
        else{
            dp[i][j]=max(calc(dp,s,t,i,j-1),calc(dp,s,t,i-1,j));
        }

        return dp[i][j];

    }
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int check=calc(dp,s,t,n,m);
        if(check==n){
            return true;
        }
        return false;
        
    }
};