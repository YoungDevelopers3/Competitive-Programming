class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<nums.size();i++){
             int first=nums[i];
             int second=i+1;
             int third=nums.size()-1;
             while(second<third){
                if(first+nums[second]+nums[third]==target){
                    return target;
                }
                else if(abs(first+nums[second]+nums[third]-target)<diff){
                    diff=abs(first+nums[second]+nums[third]-target);
                    ans=first+nums[second]+nums[third];
                }
                else if(first+nums[second]+nums[third]>target){
                    third--;
                }
                else{
                    second++;
                }

             }
        }
        return ans;
        

    }
};