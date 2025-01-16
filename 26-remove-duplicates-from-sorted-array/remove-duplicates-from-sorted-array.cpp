class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>num;
        for(int n:nums){
            num.insert(n);
        }
        vector<int>result;
        for(int i:num){
            result.push_back(i);
        }
        nums=result;
        return nums.size();
    }
};