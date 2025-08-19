class Solution {
public:
    void generate(int pos,int n,vector<int>& nums,vector<vector<int>>& ans){
       if(pos==n){
         ans.push_back(nums);
         return;
       }
     
     
     unordered_set<int>us;
     for(int i=pos;i<n;i++){
         if(us.find(nums[i])!=us.end()){
            continue;
         }
         us.insert(nums[i]);
         swap(nums[i],nums[pos]);
         generate(pos+1,n,nums,ans);
         swap(nums[pos],nums[i]);
     }
       

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int pos=0;
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>subset;
        generate(pos,n,nums,ans);
        return ans;


    }
};