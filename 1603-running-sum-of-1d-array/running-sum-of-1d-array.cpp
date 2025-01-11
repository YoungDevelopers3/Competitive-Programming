class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>result;
        for(int i:nums){
            sum=sum+i;
            result.push_back(sum);
        }
        return result;
    }
};