class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>temp=nums;
        reverse(temp.begin(),temp.end());
        for(int i:temp){
            nums.push_back(i);
        }
        return nums;
    }
};