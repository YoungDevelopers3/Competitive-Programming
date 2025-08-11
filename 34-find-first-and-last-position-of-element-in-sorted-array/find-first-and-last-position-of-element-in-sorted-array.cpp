class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};
        bool bs=binary_search(nums.begin(),nums.end(),target);
        if(bs){
            auto lo=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            auto up=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
            ans[0]=lo;
            ans[1]=up-1;
        }
        return ans;
    }
};