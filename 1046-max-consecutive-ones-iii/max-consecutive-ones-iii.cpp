class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,zero=0,n=nums.size(),len=0,max_len=INT_MIN;
        while(right<n){
            if(nums[right]==0){
                zero++;
            }
            while(zero>k){
                if(nums[left]==0){
                     zero--;
                }
                
                left++;
                
            }

            if(zero<=k){
                len=right-left+1;
               
            }
            max_len=max(max_len,len);
            right++;

        }
        return max_len;


    }
};