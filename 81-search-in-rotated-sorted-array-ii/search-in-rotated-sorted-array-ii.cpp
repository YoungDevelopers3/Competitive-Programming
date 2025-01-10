class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }
            /*As the elements are repeating what if elements at
            low==mid==high   */
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            //If the right part is sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target <=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            //If the left part is sorted
            else{
                if(nums[mid]<=target && target <=nums[high]){
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }
            }
        }
        return false;
    }
};