class Solution {
private:
int atMost(vector<int>& nums, int goal) {
        if(goal<0){
            return 0;
        }
        int left=0,right=0,n=nums.size(),sum=0,count=0;
        for(int right=0;right<n;right++){
            sum=sum+nums[right];
            while(sum>goal){
                sum=sum-nums[left];
                left++;
            }
            
           count=count+(right-left+1);

        }
     return count;
        
    }
      
public:
int numSubarraysWithSum(vector<int>& nums,int goal){
        return atMost(nums,goal) - atMost(nums,goal-1);
      }


    
};