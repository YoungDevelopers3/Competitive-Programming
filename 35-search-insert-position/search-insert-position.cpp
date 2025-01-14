class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        int it=(find(nums.begin(),nums.end(),target))-nums.begin();
        return it;
    }
};