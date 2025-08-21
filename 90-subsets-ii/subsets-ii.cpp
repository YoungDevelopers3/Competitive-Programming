class Solution {
public:
    void generate(int i,vector<int>& subset,vector<vector<int>>& ans,vector<int>& nums){
         if(i==nums.size()){
            ans.push_back(subset);
            return;
         }

       //if including the element
       
       
            subset.push_back(nums[i]);
            
            generate(i+1,subset,ans,nums);
            subset.pop_back();

       //if not including the element
       while(i<nums.size()-1 && nums[i]==nums[i+1]){
         i++;
       }
       generate(i+1,subset,ans,nums);


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
       
        vector<int>subset;
        int i=0;
        sort(nums.begin(),nums.end());
        generate(i,subset,ans,nums);
        return ans;
    }
};