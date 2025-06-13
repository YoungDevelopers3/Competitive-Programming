class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};
       auto it=find(nums.begin(),nums.end(),target);
       if(it==nums.end()){
        return ans;
       }
        auto lo=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        auto up=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        ans[0]=lo;
        ans[1]=up-1;
       
        return ans;

       


    }
};