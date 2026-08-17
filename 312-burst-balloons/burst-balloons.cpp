class Solution {
public:

    int calc(int i,int j,vector<int>& nums,vector<vector<int>> &dp){
         if(j-i<=1){
            return 0;
         }
         if(dp[i][j]!=-1){
            return dp[i][j];
         }
         int result=INT_MIN;
         for(int k=i+1;k<j;k++){
            int ans=calc(i,k,nums,dp)+calc(k,j,nums,dp)+(nums[i]*nums[k]*nums[j]);
            result=max(result,ans);
         }
         dp[i][j]=result;
         return result;

    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);  
        nums.push_back(1);
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return calc(0,n-1,nums,dp);
    }
};