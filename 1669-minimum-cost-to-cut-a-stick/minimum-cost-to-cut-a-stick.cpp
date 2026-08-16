class Solution {
public:
    int calc(int i,int j,vector<vector<int>> &dp,vector<int> &parts){
        if(j-i<=1){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int result=INT_MAX;

        for(int k=i+1;k<j;k++){
            int cost=calc(i,k,dp,parts)+calc(k,j,dp,parts)+(parts[j]-parts[i]);
            result=min(result,cost);
        }
        dp[i][j]=result;
        return result;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        vector<int>parts;
        parts=cuts;
        int m=parts.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        return calc(0,m-1,dp,parts);
    }
};