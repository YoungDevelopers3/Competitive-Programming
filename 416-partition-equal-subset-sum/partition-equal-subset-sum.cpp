class Solution {
public:
    bool calc(int sum,int n,vector<int>& nums,vector<vector<int>>& dp){
        if(sum==0){
            return true;
        }
        if(n==0){
            return false;
        }

        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }

        bool pick=false;
        if(nums[n-1]<=sum){
            pick=calc(sum-nums[n-1],n-1,nums,dp);
        }
        bool notpick=calc(sum,n-1,nums,dp);
        
        return dp[n][sum]=pick||notpick;


    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int i:nums){
            s=s+i;
        }
        
        if(s%2!=0){
            return false;
        }

        int n=nums.size();
        int sum=s/2;

        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
    return calc(sum,n,nums,dp);


    }
};