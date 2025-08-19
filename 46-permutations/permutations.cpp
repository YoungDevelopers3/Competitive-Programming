class Solution {
public:
    void generate(int pos,int n,vector<int>& nums,vector<vector<int>>& ans){
       if(pos==n){
         ans.push_back(nums);
         return;
       }
       
       for(int i=pos;i<n;i++){
          swap(nums[i],nums[pos]);
          generate(pos+1,n,nums,ans);
          swap(nums[pos],nums[i]);
       }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int pos=0;
        int n=nums.size();
        generate(pos,n,nums,ans);
        return ans;
    }
};