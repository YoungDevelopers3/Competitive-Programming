class Solution {
public:
    void generate(int i,vector<int>& nums,vector<int>& subset,vector<vector<int>>& ans){
      if(i==nums.size()){
        ans.push_back(subset);
        return;
      }    
      
      //if we are including the element
      subset.push_back(nums[i]);
      generate(i+1,nums,subset,ans);
      subset.pop_back();
  
      //if we are not including this element
      generate(i+1,nums,subset,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        int i=0;
        generate(i,nums,subset,ans);
        return ans;
    }
};