class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        for(int i:nums){
            st.insert(i);
        }
        nums.clear();
        for(auto i:st){
            nums.push_back(i);
        }
         int n=nums.size();
        if(n<3){
           return nums[n-1];
        }
        return nums[n-3];
    }
};