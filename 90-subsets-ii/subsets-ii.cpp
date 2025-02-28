class Solution {
public:

    void check(int index,vector<int>& nums,vector<int>& subset,vector<vector<int>>& subsets,int n){
        if(index==n){
            subsets.push_back(subset);
            return;
        }
       //Selecting the element
       subset.push_back(nums[index]);
       check(index+1,nums,subset,subsets,n);
       subset.pop_back();

       while(index+1<n && nums[index]==nums[index+1]){
        index++;
       }
       check(index+1,nums,subset,subsets,n);
    }



    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>subsets;
        vector<int>subset;
        int index=0;
        int n=nums.size();
        check(index,nums,subset,subsets,n);
        sort(subsets.begin(),subsets.end());
        return subsets;
    }
};