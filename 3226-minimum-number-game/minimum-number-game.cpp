class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        while(nums.size()>=1){
            int alice=0,bob=0;
            alice=nums[0];
            bob=nums[1];
            nums.erase(nums.begin());
            nums.erase(nums.begin());
            v.push_back(bob);
            v.push_back(alice);
        }
        return v;
    }
};