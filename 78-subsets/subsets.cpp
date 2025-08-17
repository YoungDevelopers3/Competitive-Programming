class Solution {
public:
    vector<vector<int>>all_subsets;
    void generate(vector<int> &subset,int i,vector<int> &nums){
          if(i==nums.size()){
            all_subsets.push_back(subset);
            return;
          }
          generate(subset,i+1,nums);
          subset.push_back(nums[i]);
          generate(subset,i+1,nums);
          subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        int i=0;
        generate(subset,i,nums);        
        return all_subsets;

    }
};