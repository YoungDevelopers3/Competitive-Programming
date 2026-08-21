class Solution {
  public:
  
   bool calc(int i1,int j1,int i2,int j2,string &s1,string &s2,vector<vector<vector<vector<int>>>> &dp){
          if(i1==j1){
           return s1[i1]==s2[i2];
          }

          if(dp[i1][j1][i2][j2]!=-1){
             return dp[i1][j1][i2][j2];
          }

          bool ans=false;
          int maxlen=j1-i1+1;

          for (int len=1; len<maxlen; len++) {

    // Check if s2[i2, i2+len-1] is scrambled version of s1[i1, i1+len-1] 
    // and s2[i2+len, j2] is scrambled version of s1[i1+len, j1].
	bool val1 = calc(i1, i1+len-1, i2, i2+len-1, s1, s2, dp) &&
	            calc(i1+len, j1, i2+len, j2, s1, s2, dp);

       // Check if s2[j2-len+1, j2] is scrambled version of s1[i1, i1+len-1] 
    // and s2[i2, j2-len] is scrambled version of s1[i1+len, j1].
	bool val2 = calc(i1, i1+len-1, j2-len+1, j2, s1, s2, dp) &&
	            calc(i1+len, j1, i2, j2-len, s1, s2, dp);

       // If any version is scrambled.
	if (val1 || val2) {ans = true; break; }
}

   // Memoize the value and return it.
return dp[i1][j1][i2][j2] = ans;  

   }
  
    bool isScramble(string& s1, string& s2) {
        // code here
        if(s1.length()!=s2.length()){
            return false;
        }
        int n=s1.length();
        vector<vector<vector<vector<int>>>> dp(n,vector<vector<vector<int>>>(n,vector<vector<int>>(n, vector<int>(n, -1))));
        return calc(0,n-1,0,n-1,s1,s2,dp);

    }
};
