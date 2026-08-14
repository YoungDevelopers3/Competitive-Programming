class Solution {
public:

    int calc(vector<vector<int>> &dp,string &s,string &st,int i,int j){
        if(i==0 || j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i-1]==st[j-1]){
            dp[i][j]=1+calc(dp,s,st,i-1,j-1);
        }
        else{
            dp[i][j]=max(calc(dp,s,st,i-1,j),calc(dp,s,st,i,j-1));
        }
        return dp[i][j];
    }

    int minInsertions(string s) {
        string st=s;
        reverse(st.begin(),st.end());
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int len=calc(dp,s,st,n,n);
        return n-len;


    }
};