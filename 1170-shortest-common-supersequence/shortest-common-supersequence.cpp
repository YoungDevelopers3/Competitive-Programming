class Solution {
public:

    int calc(vector<vector<int>> &dp,string &str1,string &str2,int i,int j){
        if(i==0 ||j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(str1[i-1]==str2[j-1]){
            dp[i][j]=1+calc(dp,str1,str2,i-1,j-1);
        }
        else{
            dp[i][j]=max(calc(dp,str1,str2,i-1,j),calc(dp,str1,str2,i,j-1));
        }

        return dp[i][j];

    }
    


    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        int i=n;
        int j=m;
        vector<vector<int>>dp(n+1,vector<int>((m+1),-1));
        calc(dp,str1,str2,n,m);
        vector<char>result;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                result.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(calc(dp,str1,str2,i-1,j)>=calc(dp,str1,str2,i,j-1)){
                 result.push_back(str1[i-1]);
                 i--;      
            }
            else{
                 result.push_back(str2[j-1]);
                 j--;      
            }
        }

        while(i>0){
            result.push_back(str1[i-1]);
            i--;
        }
        while(j>0){
            result.push_back(str2[j-1]);
            j--;
        }
        reverse(result.begin(),result.end());
       string ans="";
       for(char ch:result){
         ans=ans+ch;
       }

       return ans;

    }
};