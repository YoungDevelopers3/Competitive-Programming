class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int left=0,right=0,ans=INT_MAX;
        sort(nums.begin(),nums.end());
        while(right<nums.size()){
            if(right-left+1<k){
                right++;
            }
            else if(right-left+1==k){
                ans=min(ans,abs(nums[right]-nums[left]));
                right++;
                
            }
            else{
                left++;
            }
        }
        return ans;
    }
};