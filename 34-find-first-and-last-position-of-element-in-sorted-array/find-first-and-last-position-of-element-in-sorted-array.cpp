class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        vector<int>ans={-1,-1};
        int index=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                index=mid;
                break;
            }
            else if(nums[mid]>target){
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }

        }
        if(index!=-1){
            ans[0]=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            ans[1]=(upper_bound(nums.begin(),nums.end(),target)-nums.begin())-1;
        }
        return ans;
    }
};