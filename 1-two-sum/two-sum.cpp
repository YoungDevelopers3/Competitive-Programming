class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(freq.count(x)){
                ans.push_back(freq[x]);
                ans.push_back(i);
            }
            freq[nums[i]]=i;
        }
        return ans;
    }
};