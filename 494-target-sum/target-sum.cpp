class Solution {
public:

    int calc(vector<int>& nums,vector<vector<int>>& dp,int n,int ans){

       if(n==0){
        return ans==0 ? 1:0;
       }

       if(dp[n][ans]!=-1){
        return dp[n][ans];
       }

       int pick=0;
       if(nums[n-1]<=ans){
        pick=calc(nums,dp,n-1,ans-nums[n-1]);
       }
       int not_pick=calc(nums,dp,n-1,ans);

       return dp[n][ans]=pick+not_pick;

    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int i:nums){
            sum=sum+i;
        }
        
        if((target+sum)%2!=0 || abs(target)>sum){
            return 0;
        }

        int n=nums.size();
         int ans=(target+sum)/2;
        vector<vector<int>>dp(n+1,vector<int>(ans+1,-1));

       

        return calc(nums,dp,n,ans);

    }
};