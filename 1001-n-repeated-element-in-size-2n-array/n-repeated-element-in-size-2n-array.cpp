class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int>freq;
        for(int num:nums){
             freq[num]++;
        }
        int ans=0;
        for(auto pair:freq){
            int key=pair.first;
            int value=pair.second;
            if(value==n){
             ans=key;
            }
        }
        return ans;
    }
};