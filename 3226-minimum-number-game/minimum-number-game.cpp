class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;      
        sort(nums.begin(),nums.end());
        while(nums.size()>0){
         int a=0,b=0;
         a=nums[0];
         b=nums[1];
         nums.erase(nums.begin(),nums.begin()+2);
         arr.push_back(b);
         arr.push_back(a);
        }
        return arr;
    }
};