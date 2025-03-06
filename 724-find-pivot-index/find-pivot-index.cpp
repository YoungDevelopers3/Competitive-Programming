class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,leftsum=0;
        for(int i:nums){
            sum=sum+i;
        }
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            if(sum==leftsum){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;

    }
};