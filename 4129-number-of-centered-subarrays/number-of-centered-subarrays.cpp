class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int counter=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            unordered_set<int>seen;
            for(int j=i;j<nums.size();j++){
                 sum=sum+nums[j];
                 seen.insert(nums[j]);
                 if(seen.count(sum)){
                    counter++;
                 }
            }
        }
        return counter;
    }
};