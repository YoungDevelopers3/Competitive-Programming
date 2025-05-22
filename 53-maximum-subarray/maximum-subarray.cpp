class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int current_sum=0;
        for(int i:nums){
            current_sum+=i;
            max_sum=max(current_sum,max_sum);
            if(current_sum<0){
                current_sum=0;
            }
        }
        return max_sum;
    }
};