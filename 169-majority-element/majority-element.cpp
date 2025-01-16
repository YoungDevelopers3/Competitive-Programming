class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int n:nums){
            freq[n]++;
        }
        int s=nums.size()/2;
        int result=0;
        for(auto pair:freq){
            if(pair.second>s){
                result= pair.first;
            }
        }
        return result;
    }
};