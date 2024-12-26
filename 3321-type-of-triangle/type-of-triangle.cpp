class Solution {
public:
    string triangleType(vector<int>& nums) {
        string type="";

     if((nums[0]+nums[1]>nums[2]) && (nums[0]+nums[2]>nums[1]) && (nums[1]+nums[2]>nums[0])){
        if(nums[0]==nums[1] && nums[1]==nums[2]){
            type="equilateral";
        }
        else if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]){
            type="isosceles";
        }
        else{
            type="scalene";
        }

     }
     else{
        type="none";
     }   
        
        return type;
    }
};