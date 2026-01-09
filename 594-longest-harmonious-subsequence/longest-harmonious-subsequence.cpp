class Solution {
public:
    int findLHS(vector<int>& nums) {
        int left=0,right=0,max_l=0;
        sort(nums.begin(),nums.end());
        for(right=0;right<nums.size();right++){
            while((nums[right]-nums[left])>1){
                left++;
            }
            
            if(nums[right]-nums[left]==1){
              max_l=max(max_l,right-left+1);
            }

            
        }
        return max_l;
    }
};