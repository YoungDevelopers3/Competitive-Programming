class Solution {
  public:
    int calc(int i,int j,string &s1, string &s2,vector<vector<int>> &dp){
        if(i==0||j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+calc(i-1,j-1,s1,s2,dp);
        }
        else {
            dp[i][j]=max(calc(i-1,j,s1,s2,dp),calc(i,j-1,s1,s2,dp));
        }
        return dp[i][j];
    }
  
  
    int minSuperSeq(string &s1, string &s2) {
        // code here
        int n=s1.size();
        int m=s2.size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        calc(n,m,s1,s2,dp);
        
        string result;
        int i=n,j=m;
        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]){
                result.push_back(s1[i-1]);
                i--;
                j--;
            }
            else if(calc(i-1,j,s1,s2,dp)>=calc(i,j-1,s1,s2,dp)){
                result.push_back(s2[i-1]);
                i--;
            }
            else{
                result.push_back(s2[j-1]);
                j--;
            }
        }
        
        while (i > 0) { result.push_back(s1[i-1]); i--; }
        while (j > 0) { result.push_back(s2[j-1]); j--; }

        
        return result.length();
        
    }
};