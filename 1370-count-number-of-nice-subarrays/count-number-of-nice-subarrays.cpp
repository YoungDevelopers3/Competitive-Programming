class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return AtMost(nums,k)-AtMost(nums,k-1);
    }
private:
    int AtMost(vector<int>& nums,int k){
        if(k<0){
            return 0;
        }

        int right=0,left=0,count=0,odd=0,n=nums.size();

        for(right=0;right<n;right++){

           odd=odd+nums[right]%2;
           while(odd>k){
            odd=odd-(nums[left]%2);
            left++;
           }
          count=count+(right-left+1);


        }
       return count;


    }

};