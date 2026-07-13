class Solution {
public:

   int calc(int i,int j,string &str1,string &str2,vector<vector<int>>& dp){

         if(i==0||j==0){
            return 0;
         }

         if(dp[i][j]!=-1){
            return dp[i][j];
         }

         if(str1[i-1]==str2[j-1]){
            dp[i][j]=1+calc(i-1,j-1,str1,str2,dp);
         }
         else{
            dp[i][j]=max(calc(i-1,j,str1,str2,dp),calc(i,j-1,str1,str2,dp));
         }
        
        return dp[i][j];

   }
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();

       vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

       calc(n,m,str1,str2,dp);

       string result;
        int i = n, j = m;
        while (i > 0 && j > 0) {
            if (str1[i-1] == str2[j-1]) {
                result.push_back(str1[i-1]);
                i--; j--;
            }
            else if (calc(i-1, j, str1, str2, dp) >= calc(i, j-1, str1, str2, dp)) {
                result.push_back(str1[i-1]);
                i--;
            }
            else {
                result.push_back(str2[j-1]);
                j--;
            }
        }

        while (i > 0) { result.push_back(str1[i-1]); i--; }
        while (j > 0) { result.push_back(str2[j-1]); j--; }

        reverse(result.begin(), result.end());
        return result;

    }
};