class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]=i;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(freq.count(x) && freq[x]!=i){
               ans.push_back(i);
               ans.push_back(freq[x]);
               break;
            }
        }
        return ans;

    }
};