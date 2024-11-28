class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
    int index=0;
    for(int i=0;i<k;i++ ){
        if(nums[index]!=nums[i]){
            index++;
            nums[index]=nums[i];

        }
    }

   nums.resize(index+1);
   k=nums.size();
   return k;

    }
};
