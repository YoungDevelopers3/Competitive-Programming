class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min_dist=INT_MAX;
       // int index_start=-1;
        int index_target=-1;
        for(int i=0;i<nums.size();i++){
            // if(nums[i]==start){
            //     index_start=i;
            // }
            if(nums[i]==target){
                index_target=i;
            }
            if(index_target!=-1){
                min_dist=min(min_dist,abs(index_target-start));
            }

        }
         if(min_dist<nums.size()){
            return min_dist;
         }
         return -1;


    }
};