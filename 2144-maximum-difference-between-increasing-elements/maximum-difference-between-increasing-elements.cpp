class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int low=nums[0];
        int diff=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>low){
                int d=nums[i]-low;
                diff=max(diff,d);
            }
            else{
                low=nums[i];
            }
        }
        return diff;
    }
};