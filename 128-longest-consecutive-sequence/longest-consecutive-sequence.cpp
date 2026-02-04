class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 ||nums.size()==1){
            return nums.size();
        }
       
        sort(nums.begin(),nums.end());
        int len=0,temp=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
               temp++;  
               
            }
            else if(nums[i]-nums[i-1]==0){
               
               continue;
            }
            else{
              len=max(len,temp);
              temp=1;
            }
            
            
        }
        len=max(len,temp);
        return len;
    }
};